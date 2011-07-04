#include "cuda.h"
#include "mex.h"

#define BLOCK_SIZE 256
#define MAX_PAT_LEN 100

__constant__ int cpat_len;
__constant__ int cmus[ MAX_PAT_LEN ];
__constant__ float csigmas[ MAX_PAT_LEN ];
__constant__ int cpat_events[ MAX_PAT_LEN ];

__device__ float loss_function(int misses, float lambda)
{
    int b;
    b = (misses != cpat_len);
    return b * exp( - lambda * (float)misses/cpat_len );
}


__global__ void compute_Lh( float *LH, int Nt, int* EventN, int** EventIndexes,  float lambda, float minlh, float denom  )
{
    __shared__ float data [ BLOCK_SIZE ];
    int idx = threadIdx.x;
    int min_d = Nt;
    int min_d_sign = 1;
    int d = Nt;
    int event_index;
    int eps = BLOCK_SIZE * blockIdx.x + idx;
    int bexpr, i, is_missed;
    float delta, tlogLH;
    int tshift=0, prevrx=-1, shift=0, nev;
    int misses = 0;
    float Lhc = 0;
    int sdelta = 0, first_e;
    int min_ind, patev_n;
        
    if ( eps >= Nt ) return;
    
    //if ( idx < EventN[0] )
    //    data[ idx ] = EventIndexes[0][ idx ];
     
    for ( nev = 0; nev < cpat_len; nev++ )
    {
        min_d = Nt;
        min_d_sign = 1;
        tshift = eps + shift + cmus[ nev ];
        patev_n = cpat_events[ nev ] - 1;
        for( i = 0; i < EventN[ patev_n ]; i++ )
        {
            //d = data[i] - eps;
            __syncthreads();
            event_index = EventIndexes[ patev_n ][i];
            d = abs( event_index - tshift);
            bexpr = ( d < min_d ) && (event_index > prevrx);// && ( d >= 0 );
            min_d =  bexpr * d + ( 1 - bexpr ) * min_d;
            min_d_sign = bexpr * (event_index > tshift ? +1: -1) + 
                         (1 - bexpr) * min_d_sign;
            //min_ind = bexpr * event_index + ( 1 - bexpr ) * min_ind;
        }
        
       // first_e = ( nev==0 ) * min_ind + ( nev != 0 ) * first_e;
        
        prevrx = tshift + min_d * min_d_sign; 
        delta = min_d; 
        tlogLH = -delta*delta/(2*csigmas[nev]*csigmas[nev]);
        
        //if
        is_missed = tlogLH < minlh;
        misses += is_missed;
        shift = ( 1 - is_missed ) * ( shift + cmus[nev] + min_d * min_d_sign ) + 
                ( is_missed     ) * ( tshift - eps );
        prevrx = ( 1 - is_missed ) * prevrx + 
                ( is_missed     ) *  tshift;
        Lhc += (1-is_missed) * tlogLH;
    }
    if( eps < Nt )
        LH[ eps ] = loss_function( misses, lambda) * exp( Lhc )/ denom;// / ow( sqrt(2*M_PI)*csigmas[0] ); 
}   

/* Gateway function */
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
int i,j;
float minlh;
int N_event_types;
int *event_N;
int **event_indexes;
int Nt;
int pat_len;
int *pat_events;
float  *sigmas;
int *mus;
float lambda;
double *pr;
mxArray *mArray;

int *devEventN;
int **devEventIndexes;
int **devEventIndexesT;
int *devTmp;
float *devLH;

float denom;

float *hostLH;

if (nrhs != 5)
    mexErrMsgTxt("Input should == 5");

N_event_types = mxGetN(prhs[0]);
event_indexes = (int**) mxMalloc( N_event_types * sizeof(int *) );
event_N = (int*) mxMalloc( N_event_types * sizeof(int) );

cudaMalloc( (void **) &devEventN,       sizeof( int ) * N_event_types );
cudaMalloc( (void **) &devEventIndexes, sizeof( int * ) * N_event_types );
devEventIndexesT = (int**) mxMalloc( N_event_types * sizeof(int *) );

lambda = mxGetScalar( prhs[3] );
minlh = mxGetScalar( prhs[4] );
Nt = mxGetScalar( prhs[1] );

for ( i = 0; i < N_event_types; i++ )
{
    mArray = mxGetField( prhs[0], i,  "indexes" );
    event_N[i] = mxGetN( mArray );
    event_indexes[i] = ( int * ) mxMalloc( event_N[i] *sizeof( int ) );
    for ( j = 0; j < event_N[i]; j++ ) 
        event_indexes[i][j] = ( int ) *( mxGetPr(mArray) + j )-1 ;
    
    cudaMalloc( (void **) &devTmp, sizeof( int ) * event_N[i] );
    cudaMemcpy( devTmp, event_indexes[i], event_N[i] * sizeof( int ), cudaMemcpyHostToDevice );
    devEventIndexesT[i] = devTmp;
}
cudaMemcpy( devEventIndexes, devEventIndexesT, N_event_types * sizeof( int* ), cudaMemcpyHostToDevice );
cudaMemcpy( devEventN, event_N, N_event_types * sizeof( int ), cudaMemcpyHostToDevice );


mArray = mxGetField( prhs[2], 0,  "Events" );
pat_len = mxGetN( mArray );
pat_events = ( int * ) malloc( sizeof( int ) * pat_len );
mus = ( int * ) malloc( sizeof( float ) * pat_len );
sigmas = ( float * ) malloc( sizeof( float ) * pat_len );
pr = mxGetPr( mxGetField( prhs[2], 0,  "Theta" ) );

denom = 1;
for ( i = 0; i < pat_len; i++ )
{
    pat_events[ i ] = *( mxGetPr( mxGetField( prhs[2], 0,  "Events" ) ) + i );
    mus[ i ] = (int) pr[ 0 * pat_len + i ];
    sigmas[ i ] = (float) pr[ 1 * pat_len + i ];
    denom *= sigmas[ i ] * sqrt(2*M_PI);
   // mexPrintf("PL %d %d %f\n", pat_events[i], mus[i], sigmas[i]);
}

// cudaMemcpyToSymbol( cpat_len, &pat_len, sizeof( int ), 0, cudaMemcpyHostToDevice );
// cudaMemcpyToSymbol( cmus, mus, sizeof( int ) * pat_len, 0, cudaMemcpyHostToDevice );
// cudaMemcpyToSymbol( csigmas, sigmas, sizeof( float ) * pat_len, 0, cudaMemcpyHostToDevice );
// cudaMemcpyToSymbol( cpat_events, pat_events, sizeof( float ) * pat_len, 0, cudaMemcpyHostToDevice );

cudaMemcpyToSymbol( "cpat_len", &pat_len, sizeof( int ), 0, cudaMemcpyHostToDevice );
cudaMemcpyToSymbol( "cmus", mus, sizeof( int ) * pat_len, 0, cudaMemcpyHostToDevice );
cudaMemcpyToSymbol( "csigmas", sigmas, sizeof( float ) * pat_len, 0, cudaMemcpyHostToDevice );
cudaMemcpyToSymbol( "cpat_events", pat_events, sizeof( int ) * pat_len, 0, cudaMemcpyHostToDevice );

hostLH = ( float * ) mxMalloc( sizeof( float ) * Nt );
cudaMalloc( (void **) &devLH, sizeof( float ) * Nt );

//mexPrintf("%d %d %d %d\n", BLOCK_SIZE, int(ceil((float)Nt/BLOCK_SIZE)), Nt, pat_len );
//mexPrintf("CU %s\n", cudaGetErrorString( cudaGetLastError() ) );
dim3 dimGrid( int(ceil((float)Nt/BLOCK_SIZE)) );
dim3 dimBlock( BLOCK_SIZE );
cudaThreadSynchronize ();
compute_Lh<<<dimGrid,dimBlock>>>( devLH, Nt, devEventN, devEventIndexes, lambda, minlh, denom );
cudaThreadSynchronize ();
//mexPrintf("CU %s\n", cudaGetErrorString( cudaGetLastError() ) );
cudaMemcpy( hostLH, devLH, sizeof( float )*Nt, cudaMemcpyDeviceToHost);
cudaThreadSynchronize ();

plhs[0] = mxCreateDoubleMatrix(Nt,1,mxREAL);
for ( i = 0 ; i < Nt; i++ )
{
   // mexPrintf("%f ", hostLH[i] );
    *(mxGetPr( plhs[0] )+i) = ( double ) hostLH[i];
}
//mexPrintf("CU %s\n", cudaGetErrorString( cudaGetLastError() ) );
cudaFree( devEventN );
cudaFree( devLH );
for ( i = 0; i < N_event_types; i++ )
{
    cudaFree( devEventIndexesT[ i ] );
    mxFree( event_indexes[ i ] );
}
cudaFree( devEventIndexes );
mxFree( hostLH );
mxFree( event_N );
mxFree( event_indexes );
mxFree( devEventIndexesT );
}