#include "t_helper.h"


int fill_logfac_table(unsigned int size)
{
	unsigned int i, j;
	logfac_table = (double*) malloc( size * sizeof( double ) );
	if ( !logfac_table ) 
	{
		logfac_table_size = 0;
		fprintf( stderr, "\n Can't allocate factorial table size = %d", size);
		return 0;
	}
	logfac_table_size = size;
	logfac_table[0] = logfac_table[1] = 0;
	for ( i = 1 ; i < size; i++ )
	{
		logfac_table[i] = 0;
		for ( j = 2; j <= i; j++ )
		{
			logfac_table[i] += log( j );
		}
	}
	return 1;
}

double log_fac( double N )
{
	double ret = 0;
	unsigned int i;
	for ( i = 2; i <= N; i++)
		ret += log( i );
	return ret; 
} 

double C_iz_N_po_k(unsigned int Na, unsigned int i)
{
	unsigned int j;
	double t = 1;
	for ( j = Na - i + 1 ; ( j <= Na ) || ( ( j + i - Na ) <= i ); j++ )
    {
    			if      ( ( ( j + i - Na ) <= i ) && ( j <= Na ) )
                    t *= (double) j / ( j + i - Na );
                else if ( ( ( j + i - Na ) >  i ) && ( j <= Na ) )
                    t *= (double) j;
                else if ( ( ( j + i - Na ) <=  i ) && ( j > Na ) )
                    t /= (double) ( j + i - Na );
	}
	return t;
}

double norm_rnd(double x, double mu, double sigma)
{
	return INV_SQRT_2PI * exp( - ( x - mu )*( x - mu ) / ( 2 * sigma ) ) / sqrt(sigma) ;
}

int fill_C_iz_N_po_k_table(unsigned int N, unsigned int K)
{
	int i,j;
	C_iz_N_po_k_table_K = K;
	C_iz_N_po_k_table_N = N;
	C_iz_N_po_k_table = ( double* ) malloc( N * K * sizeof(double) );
	if ( ! C_iz_N_po_k_table )
	{
		C_iz_N_po_k_table_K = C_iz_N_po_k_table_N = 0;
		fprintf( stderr, "\n Can't allocate Combinations table %dx%d", K,N);
		return 0;
	}
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < K; j++)
		{
			C_iz_N_po_k_table[ i * K + j ] = C_iz_N_po_k(i,j);
		}
	}
	return 1;
}
