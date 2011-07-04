#include "cuda.h"
#include "mex.h"

/* Kernel to square elements of the array on the GPU */

__constant__ float cWsum;
__constant__ float cWmean;
__constant__ float cWvar;

#define BLOCK_SIZE 	512			

__global__ void reduce5 ( float * inData, float * outData, int n )
{
	__shared__ float data [BLOCK_SIZE];
	int	  tid = threadIdx.x;
	int	  i   = blockIdx.x * blockDim.x + threadIdx.x;
	
    if( i < n )
        data [tid] = inData [i];		// load into shared memeory
    else
        data [tid] = 0;
	
	__syncthreads ();
	
	for ( int s = blockDim.x / 2; s > 0; s >>= 1 )
	{
		if ( tid < s )
			data [tid] += data [tid + s];
		__syncthreads ();
	}

    if ( tid == 0 )					// write result of block reduction
		outData [blockIdx.x] = data [0];
}

void reduce_array( const float* d_array, int n, float *d_sum, float *h_sum, int block_size )
{
    int i = 0;
    float *dev_arrs[2] = { NULL, NULL };
    cudaMalloc ( (void**)&dev_arrs [0], n * sizeof( float ) );
    cudaMalloc ( (void**)&dev_arrs [1], n * sizeof( float ) );
    cudaMemcpy( dev_arrs[0], d_array, n * sizeof( float ), cudaMemcpyDeviceToDevice );
    
    for ( i = 0; n > 1; n = ceil( (float)n / block_size ) , i ^= 1 )
    {
        dim3 dimBlock ( block_size, 1, 1 );
        dim3 dimGrid  ( ceil( (float)n / block_size ), 1, 1 );
        reduce5<<<dimGrid, dimBlock>>> ( dev_arrs[i], dev_arrs[i^1], n );
    }
    
    if ( h_sum != NULL )
    {
        cudaMemcpy( h_sum, dev_arrs[i], sizeof( float ), cudaMemcpyDeviceToHost );
    }
    
    if ( d_sum != NULL )
    {
        cudaMemcpy( d_sum, dev_arrs[i], sizeof( float ), cudaMemcpyDeviceToDevice );
    }
    
    cudaFree( dev_arrs[0] );
    cudaFree( dev_arrs[1] );
}


__global__ void arr_minus_scalar_squared( float* dst, float* src, float scalar, int N )
{
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    if ( i < N )
    {
        dst[ i ] = src[ i ] - scalar;
        dst[ i ] = dst[ i ] * dst[ i ];
    }
}

__global__ void compute_mu_sigma( float* K, float *g_Ws, float *g_Xs, int N, int start_index, float S_start, float S_delta )
{
    __shared__ float data [ BLOCK_SIZE ];
    
    int Nmu = blockIdx.x; 
    int Nsigma = blockIdx.y;
    int Nsigmas = gridDim.y;
    int Nmus = gridDim.x; 
    float delta;
    int s;
    int idx = threadIdx.x;
    int i = idx + start_index;        
    float sigma = S_start + Nsigma * S_delta;
    
   
    if( i < N )
    {
        __syncthreads();
        delta = ( g_Xs[ i ] - g_Xs[ Nmu ] );
        __syncthreads();
        data[ idx ] = exp( -delta*delta/(2*sigma*sigma) ) * g_Ws[ i ];
    }
    else
    {
        data[ idx ] = 0;
    }
    
    __syncthreads ();
    
    for ( s = BLOCK_SIZE / 2; s > 0; s >>= 1 )
    {
        if ( (idx < s) )
           data [idx] += data [idx + s];
        __syncthreads ();
    }
    if ( idx == 0 )      
    {
        if ( start_index == 0 )
            K[ Nmu * Nsigmas + Nsigma ] =  data[0] / ( sqrt(2*M_PI) * sigma );
        else
            K[ Nmu * Nsigmas + Nsigma ] +=  data[0] / ( sqrt(2*M_PI) * sigma );
    }
}

__global__ void compute_max_mu_sigma( float* g_max, float *g_Mus, float *g_Ws, float *g_Xs, float *g_Sigmas, int N, int start_index)
{
    __shared__ float data [ BLOCK_SIZE ];
    float delta;
    int s;
    int idx = threadIdx.x;
    int i = idx + start_index;        
    
    float sigma = g_Sigmas[ blockIdx.x ];
    float mu = g_Mus[ blockIdx.x ];
    float xi, wi, tmp, expmax;
    
   
    if( i < N )
    {
        __syncthreads();
        xi = g_Xs[ i ];
        __syncthreads();
        wi = g_Ws[i];
        delta = ( xi - mu );
        data[ idx ] = log( wi ) - delta*delta/(2*sigma*sigma); //exp( -delta*delta/(2*sigma*sigma) );//* g_Ws[ i ] / ( sqrt(2*M_PI) * sigma ) ;
    }
    else
    {
        data[ idx ] = -10000;
    }
    
    __syncthreads ();
   
    for ( s = BLOCK_SIZE / 2; s > 0; s >>= 1 )
    {
        if ( (idx < s) )
           data [idx] = ( data[idx] > data [idx + s] ) ? data[idx] : data [idx + s];
        __syncthreads ();
    }
    if ( idx == 0 )      
    {
        if ( start_index == 0 )
            g_max[ blockIdx.x ] = exp( data[0] ) / ( sqrt(2*M_PI) * sigma ); 
        else
        {
            tmp = g_max[ blockIdx.x ];
            tmp = exp( tmp ) / ( sqrt(2*M_PI) * sigma );
            expmax = exp( data[ 0 ] )/ ( sqrt(2*M_PI) * sigma );
            g_max[ blockIdx.x ] = ( expmax > tmp ) ? expmax : tmp;
        }
    }
}


__global__ void stat_check( float* K, float* Signif, float* g_Xs, float S_start, float S_delta, float M, float alpha, int Npoints )
{
    int Nmu = blockIdx.x; 
    int Nsigma = threadIdx.x;
    int Nsigmas = blockDim.x;
    int Nmus = gridDim.x; 
    
    float mu = g_Xs[ Nmu ];
    float sigma = S_start + Nsigma * S_delta;
    
    float varg;
    float tmu = (1 - mu/M);
    float gmu = 2 * tmu/M * cWsum;
    float gsigma = 0;
    float k, dsp;
       
    float sign;
    __syncthreads();
    k = K[ Nmu * Nsigmas + Nsigma ];
    
    varg = tmu * ( 1/(sqrt(M_PI)*M*sigma) - (1-mu/M)*4/(M*M) );
    dsp = cWvar*(4*tmu*tmu/(M*M)) + cWmean*cWmean*varg + varg*cWvar; 
    gsigma = sqrt( dsp * Npoints );
    
    sign = -log( sqrt(2*M_PI)*gsigma ) - (k - gmu )*(k - gmu )/(2*gsigma*gsigma);
    __syncthreads();
    Signif[ Nmu * Nsigmas + Nsigma ] = sign * ( k > gmu ) * (sign < alpha);
}


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
int Npoints, m, i, tmp, j, nnz;
double alpha, kN;
double *BigMat;

float MaxMu;
int Nmus;

float 		M;

float *g_max, *g_Mus, *g_Sigmas;
float *h_max, *h_Mus, *h_Sigmas;

float *devSignif, *cpuSignif;
float *devK, *cpuK;
float *Xs_host;
float *Ws_host;

float *g_Xs, *g_Ws;
float *g_tmp;
double *output, *output_ml;

float sigma_start = 1, dsigma = 1;
int Nsigmas = 10;
int Nblocks;
int isig;
double *output_t;

float tWs, tWm, tWv;

dim3 dimGrid, dimBlock;


if ( nrhs != 8 )
    mexErrMsgTxt("Input should == 8");

m = mxGetN(prhs[0]);
Npoints = mxGetM(prhs[0]);
Nblocks = ceil( (float)Npoints / BLOCK_SIZE );
if ( m != 2 )
    mexErrMsgTxt("Wrong weights");

BigMat = mxGetPr( prhs[0] );
alpha = mxGetScalar(prhs[1]);
kN =    mxGetScalar(prhs[2]);
sigma_start =    mxGetScalar(prhs[3]);
dsigma =         mxGetScalar(prhs[4]);
Nsigmas =         int( mxGetScalar(prhs[5]) );
M =         float( mxGetScalar(prhs[6]) );
MaxMu = float( mxGetScalar( prhs[7] ) );
Nmus = 0;

Xs_host = ( float * ) mxMalloc( sizeof(float) * Npoints );
Ws_host = ( float * ) mxMalloc( sizeof(float) * Npoints );

for ( i = 0; i < Npoints; i++ )
{
    Xs_host[i] = (float)BigMat[ i ];
    Ws_host[i] = (float)BigMat[ Npoints + i ];
    if ( Xs_host[i] <= MaxMu )
        Nmus++;
}


cpuSignif = ( float * ) mxMalloc( sizeof(float) * Nmus * Nsigmas );
cpuK = ( float * ) mxMalloc( sizeof(float) * Nmus * Nsigmas );


cudaMalloc( (void **) &g_Xs, sizeof( float ) * Npoints );
cudaMalloc( (void **) &g_Ws, sizeof( float ) * Npoints );
cudaMalloc( (void **) &g_tmp, sizeof( float ) * Npoints );

cudaMemcpy( g_Xs, Xs_host, sizeof( float )*Npoints, cudaMemcpyHostToDevice );
cudaMemcpy( g_Ws, Ws_host, sizeof( float )*Npoints, cudaMemcpyHostToDevice );

cudaMalloc( (void **) &devSignif, sizeof(float) * Nsigmas * Nmus );
cudaMalloc( (void **) &devK, sizeof(float) * Nsigmas * Nmus );

//calculate W_sum
reduce_array( g_Ws, Npoints, NULL, &tWs, BLOCK_SIZE );
cudaMemcpyToSymbol( cWsum, &tWs, sizeof( float ), 0, cudaMemcpyHostToDevice );
//Now calculate W_mean
tWm = (float)tWs/Npoints;
cudaMemcpyToSymbol( cWmean, &tWm, sizeof( float ), 0, cudaMemcpyHostToDevice );
//deviation
arr_minus_scalar_squared<<<dim3(Nblocks),dim3(BLOCK_SIZE)>>>( g_tmp, g_Ws, tWm, Npoints );
reduce_array( g_tmp, Npoints, NULL, &tWv, BLOCK_SIZE );
tWv = tWv / ( Npoints - 1 );
cudaMemcpyToSymbol( cWvar, &tWv, sizeof( float ), 0, cudaMemcpyHostToDevice );
//mexPrintf("\nS=%f M=%f D=%f log(alpha)=%f\n", tWs, tWm, tWv, log(alpha) );
#ifdef TIME_MEASURE
    cudaEvent_t start, stop;
    float gpuTime = 0.0f;
    cudaEventCreate ( &start );
    cudaEventCreate ( &stop );
    cudaEventRecord ( start, 0 );    
#endif
    
for ( i = 0; i < Npoints; i += BLOCK_SIZE )
{
    dimBlock.x = BLOCK_SIZE;
    dimGrid.x = Nmus;
    dimGrid.y = Nsigmas;
    compute_mu_sigma<<<dimGrid,dimBlock>>>( devK, g_Ws, g_Xs, Npoints, i, sigma_start, dsigma );
    cudaThreadSynchronize ();
}
    #ifdef TIME_MEASURE
    cudaEventRecord ( stop, 0 );
    cudaEventSynchronize ( stop );
    cudaEventElapsedTime ( &gpuTime, start, stop );
    printf("c_mu_sigma: %.2f millseconds\n", gpuTime );
    cudaEventDestroy ( start );
    cudaEventDestroy ( stop  );
    #endif
    
dimGrid.y=1;
dimGrid.x=Nmus;
dimBlock.x=Nsigmas;
    #ifdef TIME_MEASURE
    cudaEventCreate ( &start );
    cudaEventCreate ( &stop );
    cudaEventRecord ( start, 0 );  
    #endif
stat_check<<<dimGrid,dimBlock>>>( devK, devSignif, g_Xs, sigma_start, dsigma, M, log(alpha), Npoints );
    #ifdef TIME_MEASURE
    cudaEventRecord ( stop, 0 );
    cudaEventSynchronize ( stop );
    cudaEventElapsedTime ( &gpuTime, start, stop );
    printf("stat_check: %.2f millseconds\n", gpuTime );
    cudaEventDestroy ( start );
    cudaEventDestroy ( stop  );
    #endif
    
cudaThreadSynchronize ();
cudaMemcpy( cpuSignif, devSignif, sizeof(float) * Nmus * Nsigmas, cudaMemcpyDeviceToHost);
cudaMemcpy( cpuK, devK, sizeof(float) * Nmus * Nsigmas, cudaMemcpyDeviceToHost);
cudaThreadSynchronize ();



output = ( double * ) mxMalloc( sizeof( double ) * Nsigmas * Nmus * 4 );

nnz = 0;
for ( i = 0; i < Nmus; i++ )
{
    for ( j = 0; j < Nsigmas; j++ )
    {
        if( cpuSignif[ i*Nsigmas + j ] )
        {
            //check that k > max() > 2
            output[ nnz*4 + 0 ] = (double) Xs_host[ i ];
            output[ nnz*4 + 1 ] = (double) sigma_start + dsigma * j;
            output[ nnz*4 + 2 ] = (double) cpuSignif[ i*Nsigmas + j ];
            output[ nnz*4 + 3 ] = (double) cpuK[ i*Nsigmas + j ];
            nnz++;
        }
    }    
}
//Copy all data for k / max() > 2 check
h_max = ( float * ) mxMalloc( sizeof(float) * nnz );
h_Mus = ( float * ) mxMalloc( sizeof(float) * nnz );
h_Sigmas = ( float * ) mxMalloc( sizeof(float) * nnz );
cudaMalloc( (void **) &g_max, sizeof( float ) * nnz );
cudaMalloc( (void **) &g_Mus, sizeof( float ) * nnz );
cudaMalloc( (void **) &g_Sigmas, sizeof( float ) * nnz );
for ( i = 0; i < nnz; i++ )
{
    h_max[ i ] = 0;
    h_Mus[ i ]    = output[ i*4 + 0 ];
    h_Sigmas[ i ] = output[ i*4 + 1 ];
}
cudaMemcpy( g_max, h_max,  sizeof(float)* nnz, cudaMemcpyHostToDevice);
cudaMemcpy( g_Mus, h_Mus,  sizeof(float)* nnz, cudaMemcpyHostToDevice);
cudaMemcpy( g_Sigmas, h_Sigmas,  sizeof(float)* nnz, cudaMemcpyHostToDevice);

#ifdef TIME_MEASURE
 cudaEventCreate ( &start );
 cudaEventCreate ( &stop );
 cudaEventRecord ( start, 0 );  
#endif
 
for ( i = 0; i < Npoints; i += BLOCK_SIZE )
{
    dimBlock.x = BLOCK_SIZE;
    dimBlock.y = 1;
    dimGrid.x = nnz;
    dimGrid.y = 1;
    cudaThreadSynchronize ();
    compute_max_mu_sigma<<<dimGrid,dimBlock>>>( g_max, g_Mus, g_Ws, g_Xs, g_Sigmas, Npoints, i );
    cudaThreadSynchronize ();
}
 #ifdef TIME_MEASURE
    cudaEventRecord ( stop, 0 );
    cudaEventSynchronize ( stop );
    cudaEventElapsedTime ( &gpuTime, start, stop );
    printf("max: %.2f millseconds\n", gpuTime );
    cudaEventDestroy ( start );
    cudaEventDestroy ( stop  );
 #endif
    
cudaMemcpy( h_max, g_max,  sizeof(float) * nnz, cudaMemcpyDeviceToHost );

output_t = ( double * ) mxMalloc( sizeof( double ) * nnz * 4 );
isig = 0;
 
//   for ( i = 0; i < Nmus; i++ )
//   {
//       for ( j = 0; j < Nsigmas; j++ )
//           mexPrintf("%lf ", cpuSignif[ i*Nsigmas + j ] );
//       mexPrintf("\n" );
//   }

for ( i = 0; i < nnz; i++ )
{
    //if ( cpuK[i] / h_max[i] > kN)
   // mexPrintf("%d %f mu %f si %f k %f \n", i, h_max[i], h_Mus[i], h_Sigmas[i], output[ i*4 + 3 ] );
    if ( (output[ i*4 + 3] / h_max[i]) > kN)
    {
        output_t[ isig*4 + 0] = output[ i*4 + 0 ];
        output_t[ isig*4 + 1] = output[ i*4 + 1 ];
        output_t[ isig*4 + 2] = output[ i*4 + 2 ];
        output_t[ isig*4 + 3] = output[ i*4 + 3 ];
        isig++;
    }
}


      


plhs[0] = mxCreateDoubleMatrix( isig,4,mxREAL);
output_ml = mxGetPr(plhs[0]);
for( i = 0; i < isig; i++ )
{
    output_ml[0*isig + i] = output_t[ i*4 + 0 ];
    output_ml[1*isig + i] = output_t[ i*4 + 1 ];
    output_ml[2*isig + i] = output_t[ i*4 + 2 ];
    output_ml[3*isig + i] = output_t[ i*4 + 3 ];
}


//mxSetPr( mxGetPr(plhs[0]), output_ml );

cudaFree( devSignif );
cudaFree( devK );
cudaFree( g_Ws );
cudaFree( g_Xs );
cudaFree( g_tmp );
cudaFree( g_max );
cudaFree( g_Mus );
cudaFree( g_Sigmas );
mxFree( h_Sigmas );
mxFree( h_Mus );
mxFree( h_max );
mxFree( cpuK );
mxFree( cpuSignif );
mxFree( output );
mxFree( Xs_host );
mxFree( Ws_host );
mxFree( output_t );
/*
data2 = mxGetPr(plhs[i]);
cudaEventRecord ( stop, 0 );
cudaEventSynchronize ( stop );
cudaEventElapsedTime ( &gpuTime, start, stop );
mexPrintf( "time spent executing by the GPU: %.2f millseconds\n", gpuTime );

for (j = 0; j < m*n; j++)
{
data2[j] = (double) data2f[j];
}


mxFree(data1f);
mxFree(data2f);
cudaFree(data1f_gpu);
cudaFree(data2f_gpu);*/

}