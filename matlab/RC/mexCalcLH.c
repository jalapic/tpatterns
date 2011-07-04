#include "mex.h"
#include <stdio.h>
#include <stdlib.h>

struct pattern
{
    int events_num;
    int *events;
    double *mus;
    double *sigmas;
};

struct timeseries
{
    int num_events;
    long int *num_indexes;
    long int **indexes;
};

void mexFunction(int nlhs,mxArray *plhs[],int nrhs,const mxArray *prhs[])
{
    long int Nt;
    int from_end;
    int start_index;
    mwSize dims[] = {1,5};
    mwSize CIdims[] = {0,0,2};
    mwSize DSdims[] = {0,0,2};
    struct pattern pat;
    struct timeseries ts;
    
    mxArray *mArray;
    Nt = mxGetScalar( prhs[1] );
    from_end = mxGetScalar( prhs[3] );
    start_index = mxGetScalar( prhs[4] );
    pat.events = mxGetField( prhs[2], 0, "Events" );
    pat.events_num = mxGetN( pat.events );
    ts.events_num = mxGetN( prhs[0] );
    ts.num_indexes = (long int *) malloc( events_num * sizeof( long int ) );
    ts.indexes = (long int **) malloc( events_num * sizeof( long int * ) );
    for ( i = 0; i < ts.num_events; i++ )
    {
        pr = mxGetField( prhs[0], i,  "indexes" );
        ts.N[i] = mxGetN( pr );
        ts.event_i[i] = (unsigned int*) malloc( ts.N[i] *sizeof( unsigned int ) );
        /*Can't use memcpy here!!*/
        for ( j = 0; j < ts.N[i]; j++ ) ts.event_i[i][j] = (unsigned int) *( mxGetPr(pr) + j) - 1 ;
        pr = mxGetField( prhs[0], i,  "event_name" );
        ts.event_sign[i] = (char*) mxArrayToString( pr );
    }

        /*copy alpha and Nab struct*/
        pr = mxGetPr( prhs[2] );
        for ( i = 0; i < ts.nlevels; i++ )
        {
            ts.levels[i].len =  pr[i*3 + 0];
            ts.levels[i].alpha = pr[i*3 + 1];
            ts.levels[i].Nmin =  pr[i*3 + 2];
        }

        /*Defaults*/
        ts.patterns = (t_pattern_list*) malloc( sizeof( t_pattern_list ) );
        ts.patterns->next=NULL;
        ts.ci_strategy = mxGetScalar(prhs[4]);
        ts.output = stdout;
        ts.alpha = 0.005;
        ts.Nmin = 3;
        ts.allow_same_events_in_pattern = mxGetScalar(prhs[3]);
        logfac_table_size = 0;
        C_iz_N_po_k_table_K = C_iz_N_po_k_table_N = 0; 

        /* Construct pseudo patterns */
        for ( i = 0; i < ts.num_event_types; i++ )
        {
            Namax =  Namax < ts.N[i] ? ts.N[i] : Namax;  
            buf[0] = i;
            tmp = add_pattern(ts.patterns, buf, 1);
            tmp->pat.ind = ( double_series*) malloc( sizeof(double_series) * ts.N[i] );
            tmp->pat.N = ts.N[i];
            for ( j = 0; j < ts.N[i]; j++)
            {
                tmp->pat.ind[j].l = tmp->pat.ind[j].r = ts.event_i[i][j];
            }
        }
        if (logfac_table_size)
        {
            fill_logfac_table( Namax+1 );
            fill_C_iz_N_po_k_table( Namax+1, Namax+1);
        }
    
    
    t_detect_patterns(&ts);
      
    mexPrintf("\n ITERATIONS %d\n", iteration_number); 
    dims[1] = num_patterns[ iteration_number - 1  ];
    plhs[0] = mxCreateStructArray(2, dims, 6, field_names);
    Events_field   = mxGetFieldNumber( plhs[0], "Events" );
    CIs_field      = mxGetFieldNumber( plhs[0], "CIs" );
    Sign_field     = mxGetFieldNumber( plhs[0], "Sign" );
    Nab_field      = mxGetFieldNumber( plhs[0], "Nab" );
    DS_field       = mxGetFieldNumber( plhs[0], "DS" );
    String_field   = mxGetFieldNumber( plhs[0], "String" );
    
    tmp = patterns_it[ iteration_number - 1 ]->next;
    for ( i = 0; i < num_patterns[ iteration_number - 1  ]; i++ )
    {
        Ip = &tmp->pat;
        /* Fill pattern field */
        mArray = mxCreateDoubleMatrix( 1, Ip->nevents, mxREAL );
        mxSetFieldByNumber(plhs[0], i, Events_field,  mArray );
        pr = mxGetPr( mArray );
        for ( j = 0; j < Ip->nevents; j++ )
            pr[j] = Ip->events[j] + 1; /*Matlab base index is 1 !!!*/            
        
        /* Fill significance field */
        mArray = mxCreateDoubleScalar( Ip->significance );
        mxSetFieldByNumber(plhs[0], i, Sign_field,  mArray );
               
        /* Fill Nab field */
        mArray = mxCreateDoubleScalar( Ip->N );
        mxSetFieldByNumber(plhs[0], i, Nab_field,  mArray );
                
        /* Fill CI field */
        mArray = mxCreateDoubleMatrix( Ip->nevents - 1, 2, mxREAL);
        mxSetFieldByNumber(plhs[0], i, CIs_field,  mArray );
        pr = mxGetPr( mArray );
        for ( j = 0; j < Ip->nevents - 1; j++ )
        {
            pr[ 0*(Ip->nevents - 1) + j ] = Ip->CI[j].l;
            pr[ 1*(Ip->nevents - 1) + j ] = Ip->CI[j].r;
        }
        
        /* Fill DS field */
        mArray = mxCreateDoubleMatrix( Ip->N, 2, mxREAL);
        mxSetFieldByNumber(plhs[0], i, DS_field,  mArray );
        pr = mxGetPr( mArray );
        for ( j = 0; j < Ip->N; j++ )
        {
            pr[ 0 * Ip->N + j ] = Ip->ind[j].l + 1; /*Matlab base index is 1 !!!*/   
            pr[ 1 * Ip->N + j ] = Ip->ind[j].r + 1; /*Matlab base index is 1 !!!*/   
        }
        
        mArray = mxCreateCharMatrixFromStrings( 1, &pattern_strings[i]);
        mxSetFieldByNumber(plhs[0], i, String_field,  mArray );
        tmp = tmp->next;
    }
    
}
