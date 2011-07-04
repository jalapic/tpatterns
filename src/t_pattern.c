#include "t_pattern.h"

t_pattern_list* add_pattern(t_pattern_list *pl, int *events, int nevents )
{
    t_pattern_list* it;
    for ( it =  pl; it->next != NULL; it = it->next);
    it->next = ( t_pattern_list* ) malloc( sizeof( t_pattern_list ) );
    it->next-> pat.new_one = 1;
    it->next-> pat.N = 0;
    it->next-> pat.tree_len = 0;
    it->next-> pat.significance = 0;
    it->next-> pat.nevents = nevents;
    it->next-> pat.events = (int*) malloc( sizeof(int) *nevents );
    memcpy( it->next-> pat.events, events, sizeof(int) * nevents );
    
    it->next->next = NULL;
    return it->next;
}	

void delete_pattern(t_pattern_list *pl, t_pattern *el)
{
    t_pattern_list *prev;
    
    for (prev = pl, pl = pl->next; pl != NULL; pl = pl->next, prev = prev->next )
    {
        if ( &pl->pat == el )
            prev->next = pl->next; 
    }
    free( el->events );
    free ( el );
}

void conc_patterns(t_pattern_list *pl1, t_pattern_list *pl2)
{
    for ( pl1 = pl1->next; pl1->next != NULL; pl1 = pl1->next );
    pl1->next = pl2->next;
}

int t_is_subpattern(t_pattern* Lp, t_pattern* Rp)
{
    int i,j,c;
    int is_substr = 1;
    for ( i = 0; i < Rp->nevents; i++)
    {
        if ( Lp->events[0] == Rp->events[i] )
        {
            is_substr = 0;
            c = 0;
            for ( j = 0; j < Rp->nevents - i; j++ )
            {
                
                if ( Lp->events[c] == Rp->events[i+j] ) c++; 
                if ( c == Lp->nevents ) 
                {
                    is_substr = 1; 
                    break;
                }
            }
            if ( is_substr ) return 1;
        }
    }
    return 0;
}

int used = 0;
double t_calc_prior_probability (unsigned int Nt, unsigned int Na, unsigned int Nb, unsigned int Nab, unsigned int d, int method)
{
    /**
    * TODO: calculate probability,if it is getting bigger than smth.... bail out
    * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    *  Normal and poisson aproximations - when probability is large ==> we don't care!
    * 
    * */
    unsigned int i, j;
    double acc=0, t, Pb, Pnb, Pb_d, Pnb_d, logfac;
    Pb = (double) Nb/Nt;
    Pnb = 1 - Pb;
    Pb_d = pow( Pb, d );
    Pnb_d = pow ( Pnb, d );
    
    if ( ( method & T_PCALC_NORMRND ) && 
        ( Na * ( 1 - Pnb_d ) > 10 ) && ( Na * Pnb_d > 10) )
    { 
        used++;
        for ( i = 0; i < Nab; i++)
        {
            t=1;
            t *= norm_rnd(i, Na * ( 1 - Pnb_d ), Na * ( 1 - Pnb_d ) * Pnb_d );
            acc += t;
        }
    }
    else if ( ( method & T_PCALC_POISSON  ) &&
                ( ( ( 1 - Pnb_d ) <= 0.07 ) &&  ( Na*(1-Pnb_d) <= 6 ) ) )
    {
        used++;
        for ( i = 0; i < Nab; i++)
        {
            t=1;
            if ( logfac_table_size ) 
                logfac = logfac_table[i];
            else
                logfac = log_fac( i );
            t *= exp( - (double)(1-Pnb_d)*Na - logfac + i * log((double)(1-Pnb_d)*Na) );
            acc += t;
        }
    }
    else if ( ( method & T_PCALC_TABULATED_FULL ) && C_iz_N_po_k_table_K )
    {
        for ( i = 0; i < Nab; i++)
        {
            
            t=1;
            t = C_iz_N_po_k_table[ Na * C_iz_N_po_k_table_K + i ]; /*exp( logfac_table[ Na ] - logfac_table[ i ] - logfac_table[ Na - i ] );*/
            t *= pow( 1 - Pnb_d, i );
            t *= pow( Pnb_d, Na - i );
            acc += t;
        }	
    } 
    else /*if (  method & T_PCALC_T_FULL_MEAN  )*/ /*  */
    {
        acc = 0;
        for ( i = 0; i < Nab; i++)
        {
            t=1;
            t = C_iz_N_po_k(Na, i);
            t *= pow( 1 - Pnb_d, i );
            t *= pow( Pnb_d, Na - i );
            acc += t;
        }
    }
    return 1 - acc;
}

void t_construct_pattern(t_pattern_list *pl, t_pattern *Lp, t_pattern *Rp, double_series *possible_ds, int Nab, double P_prior, int d1, int d2)
{
    t_pattern_list *tmp;
    int *events;
    int i,k, max_k;
    double_series *CI;
    events = (int*) malloc( ( Lp->nevents + Rp->nevents ) * sizeof( int ) );
    CI = ( double_series* ) malloc ( ( Lp->nevents + Rp->nevents - 1 ) * sizeof( double_series ) );
    memcpy( events, Lp->events, Lp->nevents * sizeof( int ) );
    memcpy( &events[ Lp->nevents ], Rp->events, Rp->nevents * sizeof( int ) );
    if ( Lp->nevents > 1 ) memcpy( CI, Lp->CI, (Lp->nevents - 1) * sizeof( double_series ) );
    if ( Rp->nevents > 1 ) memcpy( &CI[ Lp->nevents ], Rp->CI, (Rp->nevents - 1) * sizeof( double_series ) );
    CI[ Lp->nevents - 1 ].l = d1;
    CI[ Lp->nevents - 1 ].r = d2;
    tmp = add_pattern( pl, events, Lp->nevents + Rp->nevents );
    free( events );
    tmp->pat.ind = ( double_series*) malloc( sizeof(double_series) * Nab );
    tmp->pat.N = Nab;
    tmp->pat.significance = P_prior;
    tmp->pat.d1 = d1;
    tmp->pat.d2 = d2;
    tmp->pat.CI = CI;
    
    max_k = 0;
    k=0;
    for (i = 0; i < Lp->tree_len; i++)
    {
        if ( Lp->tree[i] == -1 ) k++;
        else
        {
            max_k = ( k > max_k ) ? k : max_k;
            k = 0;
        }
    }
    for (i = 0; i < Rp->tree_len; i++)
    {
        if ( Rp->tree[i] == -1 ) k++;
        else
        {
            max_k = ( k > max_k ) ? k : max_k;
            k = 0;
        }
    }
    tmp->pat.tree_len = Lp->tree_len + Rp->tree_len + max_k + 1;
    tmp->pat.tree = (int*)malloc( sizeof(int) * tmp->pat.tree_len );
    for ( i = 0; i < Lp->tree_len; i++ ) tmp->pat.tree[i] = Lp->tree[i]; 
    for ( i = Lp->tree_len; i < Lp->tree_len + max_k + 1; i++ ) tmp->pat.tree[i] = -1;
    for ( i = Lp->tree_len + max_k + 1; i < Lp->tree_len + max_k + 1 + Rp->tree_len; i++ ) tmp->pat.tree[i] = Rp->tree[ i - Lp->tree_len - max_k - 1 ];
    
    memcpy( tmp->pat.ind, possible_ds, Nab * sizeof( double_series ) );
}

t_pattern* t_construct_pattern_sta(t_pattern *Lp, t_pattern *Rp, double_series *possible_ds, int Nab, double P_prior, int d1, int d2)
{
    t_pattern* pat;
    int *events;
    int i,k, max_k;
    double_series *CI;
    events = (int*) malloc( ( Lp->nevents + Rp->nevents ) * sizeof( int ) );
    CI = ( double_series* ) malloc ( ( Lp->nevents + Rp->nevents - 1 ) * sizeof( double_series ) );
    memcpy( events, Lp->events, Lp->nevents * sizeof( int ) );
    memcpy( &events[ Lp->nevents ], Rp->events, Rp->nevents * sizeof( int ) );
    if ( Lp->nevents > 1 ) memcpy( CI, Lp->CI, (Lp->nevents - 1) * sizeof( double_series ) );
    if ( Rp->nevents > 1 ) memcpy( &CI[ Lp->nevents ], Rp->CI, (Rp->nevents - 1) * sizeof( double_series ) );
    CI[ Lp->nevents - 1 ].l = d1;
    CI[ Lp->nevents - 1 ].r = d2;

    pat = ( t_pattern * ) malloc( sizeof( t_pattern ) ) ;
    pat->new_one = 1;
    pat->nevents =Lp->nevents + Rp->nevents;
    pat->events = ( int * ) malloc( sizeof(int) * pat->nevents );
    memcpy( pat->events, events, sizeof(int) * pat->nevents );
    free( events );

    pat->ind = ( double_series*) malloc( sizeof(double_series) * Nab );
    pat->N = Nab;
    pat->significance = P_prior;
    pat->d1 = d1;
    pat->d2 = d2;
    pat->CI = CI;

    max_k = 0;
    k=0;
    for (i = 0; i < Lp->tree_len; i++)
    {
        if ( Lp->tree[i] == -1 ) k++;
        else
        {
            max_k = ( k > max_k ) ? k : max_k;
            k = 0;
        }
    }
    for (i = 0; i < Rp->tree_len; i++)
    {
        if ( Rp->tree[i] == -1 ) k++;
        else
        {
            max_k = ( k > max_k ) ? k : max_k;
            k = 0;
        }
    }
    pat->tree_len = Lp->tree_len + Rp->tree_len + max_k + 1;
    pat->tree = (int*)malloc( sizeof(int) * pat->tree_len );
    for ( i = 0; i < Lp->tree_len; i++ ) pat->tree[i] = Lp->tree[i];
    for ( i = Lp->tree_len; i < Lp->tree_len + max_k + 1; i++ ) pat->tree[i] = -1;
    for ( i = Lp->tree_len + max_k + 1; i < Lp->tree_len + max_k + 1 + Rp->tree_len; i++ ) pat->tree[i] = Rp->tree[ i - Lp->tree_len - max_k - 1 ];

    memcpy( pat->ind, possible_ds, Nab * sizeof( double_series ) );
    return pat;
}

int t_is_equal_ds(double_series* ds1, int n1, double_series* ds2, int n2)
{
    int i;
    if ( n1 != n2 ) return 0;
    for ( i = 0; i < n1; i++)
        if ( ( ds1[i].l != ds2[i].l ) || ( ds1[i].r != ds2[i].r ) ) return 0;
    return 1;
}

int t_is_intersec(double_series* dsL, double_series* dsR, int n)
{
    int i;
    for ( i = 0; i < n; i++ )
    {
        if ( ( dsL[i].l > dsR[i].r ) || ( dsL[i].r < dsR[i].l ) ) return 0;
    } 
    return 1;
}

int contain_same_events(t_pattern* Lp, t_pattern* Rp)
{
    int i,j;
    for ( i = 0; i < Rp->nevents; i++ )
        for ( j = 0; j < Lp->nevents; j++ )
            if ( Rp->events[i] == Lp->events[j] ) return 1;
    return 0;
}

int t_is_equal_events( t_pattern* Lp, t_pattern* Rp1, t_pattern* Rp2 )
{
    int i, j;
    if ( Lp->nevents != Rp1->nevents + Rp2->nevents ) return 0;
    for ( i = 0; i < Rp1->nevents; i++ )
        if ( Lp->events[i] != Rp1->events[i] ) return 0;
    
    for ( j=0; j < Rp2->nevents; j++ )
        if ( Lp->events[ i + j ] != Rp2->events[ j ] ) return 0;
            
    return 1;
}

int t_is_equal_events2( t_pattern* Lp, t_pattern* Rp)
{
    int i;
    if ( Lp->nevents != Rp->nevents ) return 0;
    for ( i = 0; i < Rp->nevents; i++ )
        if ( Lp->events[i] != Rp->events[i] ) return 0;
    return 1;
}

int t_construct_pair_pat_array( t_pattern*** LPat_pts, t_pattern*** RPat_pts, int *Npairs, const t_time_series* ts )
{
    int i,j, N;
    t_pattern **L, **R;
    t_pattern *Lp, *Rp;
    t_pattern_list *Lpl, *Rpl;
    N = 0;
    for ( Lpl = ts->patterns->next; Lpl != NULL; Lpl = Lpl->next, N++ );
    L = ( t_pattern ** ) malloc( sizeof( t_pattern * ) * N * N );
    R = ( t_pattern ** ) malloc( sizeof( t_pattern * ) * N * N );
    for ( i = 0, j =0, Lpl = ts->patterns->next; Lpl != NULL; Lpl = Lpl->next )
    {
        for ( Rpl = ts->patterns->next; Rpl != NULL; Rpl = Rpl->next, i++ )
        { 
            Lp = &Lpl->pat;
            Rp = &Rpl->pat;
            if (! (Rp->new_one || Lp->new_one ) ) continue; /* We don't want to check same patterns more than once */
            if ( ( ! ts->allow_same_events_in_pattern) &&  contain_same_events(Rp, Lp)  ) continue; 
            
            L[ j ] = Lp;
            R[ j ] = Rp;
            j++;
        }
    }
    N = j;
    *LPat_pts = ( t_pattern ** ) malloc( sizeof( t_pattern * ) * N );
    *RPat_pts = ( t_pattern ** ) malloc( sizeof( t_pattern * ) * N );
    memcpy( *LPat_pts, L, N * sizeof( t_pattern * ) );
    memcpy( *RPat_pts, R, N * sizeof( t_pattern * ) );
    *Npairs = N;
    
    free( L );
    free( R );
    return 0;
}

int t_check_and_add_candidate( t_pattern_lst* pat_candidates, const t_pattern *Lp, const t_pattern *Rp, int d1, int d2,
                               const double_series *possible_ds, int Nab, double P_prior, const t_time_series *ts       )
{
/*We have 3 possibilities:
 *1)New pattern doe snot intersect with older patterns ==> we add it
 *2)New pattern intersect with older and it is better  ==> add new, delete old
 *3)New pattern intersect with older and it is not better=>do nothing
 *4)If new pattern has max significance ==> we leave it
 */
    t_pattern_lst *it;
    t_pattern_lst *tmp, *prev;
    t_pattern *pat;
    int no_intersect = 1;
    int better = 0;
    int best_signif = 1;
    it = pat_candidates->next;
    prev = pat_candidates;
    while( it != NULL )
    {

        tmp = it->next;
        pat = it->pat;
        if ( ( ( pat->d1 < d1 ) && ( pat->d2 > d1 ) ) ||
             ( ( pat->d1 > d1 ) && ( pat->d1 < d2 ) ) )
        {
            no_intersect = 0;
            /* We had intersection, deside what to do */
            if (  ( ( pat->d2 - pat->d1  < d2 - d1 ) && ( ts->ci_strategy == T_LONGEST_CI     ) ) ||
                  ( ( pat->d2 - pat->d1  > d2 - d1 ) && ( ts->ci_strategy == T_SHORTEST_CI    ) ) ||
                  ( ( pat->significance  < P_prior ) && ( ts->ci_strategy == T_SIGNIFICANT_CI ) )   )
            {
                t_delete_node( it );
                prev->next = tmp;
                it = prev;
                better = 1;
            }

        }

        if( pat->significance > P_prior )
            best_signif = 0;

        prev = it;
        it = tmp;
    }

    if ( no_intersect || better ) /*|| best_signif )*/
    {
        it = t_new_blank_lst_node();
        t_push_lst( pat_candidates, it );
        it->pat = t_construct_pattern_sta( Lp, Rp, possible_ds, Nab, P_prior, d1, d2 );
        return 1;
    }
    return 0;
}

void t_detect_patterns(t_time_series *ts)
{
    t_pattern_list *new_patterns, *Lpl, *Rpl, *Ipl, *pRpl, *pLpl;
    t_pattern_lst *it;
    t_pattern_list *itl;
    t_pattern *Lp, *Rp;
    double_series *possible_ds;
    unsigned int d, d1, d2,i, j, k, l, m, Nab;
    int pattern_detected = 0, is_duplicate = 0, stat, detectedL, detectedR, iter_num;
    double P_prior, tmp_P_prior;
    int iter = 0;
    double alpha = ts->alpha;
    int Nmin = ts->Nmin;
    double err;
    
    int n_candidates;
    t_pattern_lst* pat_candidates;

    t_pattern **LPat_pts, **RPat_pts;
    int Npairs;
    
    t_output_report_info(ts);	
    
    time_calc=0;
    time_compl=time_inter =time_calc_in=0;
    
    stat = 0;

    
    while ( !stat )
    {
        new_patterns = (t_pattern_list*) malloc( sizeof( t_pattern_list ) );
        new_patterns->next=NULL;
        
        t_output_print_iteration( ts,  ++iter );
        #ifdef MATLAB_ENABLE
            iteration_number++;
        #endif
        stat = 1;
        
        t_construct_pair_pat_array( &LPat_pts, &RPat_pts, &Npairs, ts );
        #pragma omp parallel for shared( stat, new_patterns, LPat_pts, RPat_pts) private(iter_num, pat_candidates, n_candidates, it, itl) firstprivate( i,j, k, l, m, Lp, Rp, pattern_detected, P_prior, d1, d2, d, possible_ds, Nab, alpha, Nmin, is_duplicate, Ipl )
        for ( iter_num = 0; iter_num < Npairs; iter_num++ )
        {
            Lp = LPat_pts[ iter_num ];
            Rp = RPat_pts[ iter_num ];
            t_choose_significance_levels(ts, &alpha, &Nmin, Lp->nevents + Rp->nevents);

            n_candidates = 0;
            pat_candidates = t_new_blank_lst_node();
            #ifndef MATLAB_ENABLE
                fprintf(stdout,  "Scanning %f %d %d ", (float)iter_num / Npairs, iter_num, Npairs );
                t_printf_pattern( stdout, Lp, ts);
                printf("  and  ");
                t_printf_pattern( stdout, Rp, ts);
                printf("\n");
            #endif
            pattern_detected = 0;

            for ( i = 0; i < Rp->N; i++ )
            {
                for ( j = 0; j < Rp->N; j++)
                {
                    if ( i > j )
                        continue;
                    for ( k = 0; k < Lp->N; k++ )
                    {
                        if ( Rp->ind[i].l >= Lp->ind[k].r )
                        {
                            d1 = Rp->ind[i].l - Lp->ind[k].r;
                            d2 = Rp->ind[j].l - Lp->ind[k].r;
                            if ( ( d1 == 0 ) ) continue;
                            d  = d2 - d1 + 1;
                            Nab = 0;
                            possible_ds = ( double_series* ) malloc(  ( (Lp->N < Rp->N )? Rp->N : Lp->N ) * sizeof( double_series ) );
                            for ( l = 0; l < Lp->N; l++ )
                            {
                                for ( m = 0; m < Rp->N; m++ )
                                {
                                    if ( Nab && ( Lp->ind[l].l <= possible_ds[ Nab - 1].r) ) continue;
                                    if ( ( Rp->ind[m].l >= Lp->ind[l].r + d1 ) && ( Rp->ind[m].l <= Lp->ind[l].r + d2 ) )
                                    {
                                        possible_ds[Nab].l = Lp->ind[l].l;
                                        possible_ds[Nab].r = Rp->ind[m].r;
                                        Nab++;
                                        break;
                                    }
                                 }
                             }
                             P_prior = t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d, T_PCALC_T_FULL_MEAN);
                             if ( (P_prior <= alpha)  && ( Nab >= Nmin ) )
                             {
                                n_candidates += t_check_and_add_candidate( pat_candidates, Lp, Rp, d1, d2, possible_ds, Nab, P_prior, ts );
                                pattern_detected = 1;
                             }
                             free( possible_ds );
                          }
                      }
                  }
              }
        
              if ( pattern_detected )
              {

              /* free( tmp_possible_ds );*/
                        for ( it = pat_candidates->next; it != NULL; it = it -> next )
                        {
                            is_duplicate = 0;
                            for (Ipl = ts->patterns->next; Ipl != NULL; Ipl = Ipl->next)
                            {   /*TODO: DUPLICATES (ACB) is not (AB)... check for event amount*/
                                if ( t_is_equal_ds(Ipl->pat.ind, Ipl->pat.N, it->pat->ind, it->pat->N ) && t_is_equal_events2( &Ipl->pat, it->pat ) )
                                {
                                    is_duplicate = 1;
                                    break;
                                }
                            }
                            if (!is_duplicate)
                            {
                                #pragma omp critical
                                {
                                    itl = add_pattern( new_patterns,  it->pat->events, it->pat->nevents );
                                }
                                /*free( itl->pat.events ); /*So BAD*/
                                t_pattern_deep_copy( &( itl->pat), it->pat );
                                stat = 0;
                                /*t_construct_pattern(new_patterns, it->pat->Lp, it->pat->Rp, tmp_possible_ds, tmp_Nab, tmp_P_prior, tmp_d1, tmp_d2);*/
                            }

                     }
               }
              t_delete_all_lst( pat_candidates );
        }
        
        Npairs = 0;
        free( LPat_pts );
        free( RPat_pts );
        
        /* Mark checked patterns */ 
        for ( Ipl = ts->patterns->next; Ipl != NULL; Ipl = Ipl->next )	
            Ipl->pat.new_one = 0;
        
        t_output_print_found_patterns(ts, new_patterns->next);
        
        /* Merge old and new pattern lists */
        conc_patterns(ts->patterns, new_patterns);
        
        /* Completness check */
        for ( pLpl = ts->patterns, Lpl = ts->patterns->next; Lpl != NULL;)
        {
            detectedL = 0;
            for ( pRpl = ts->patterns, Rpl = ts->patterns->next; Rpl != NULL; )
            {
                detectedR = 0;
                Rp = &Rpl->pat;
                Lp = &Lpl->pat;
                if ( (Rp->N == Lp->N) && ( Rp != Lp ) )
                {
                    if ( t_is_subpattern( Lp, Rp ) && t_is_intersec( Lp->ind, Rp->ind, Rp->N ) &&
                        ( Lp->nevents != 1 ) ) /* Don't delete pseudo patterns */
                    {
                        /* delete_pattern  Lp */
                        t_output_print_deleted(ts, Lpl, Rpl);
                        
                        pLpl->next = Lpl->next;
                        free( Lp->events );
                        free( Lp->CI );
                        free( Lpl );
                        Lpl = pLpl->next;
                        stat = 0;
                        detectedL = 1;
                        break;
                    }
                    else if ( t_is_subpattern( Rp, Lp )  && t_is_intersec( Rp->ind, Lp->ind, Rp->N ) &&
                        ( Rp->nevents != 1 ) ) /* Don't delete pseudo patterns */
                    {
                        /* delete_pattern  Rp */
                        t_output_print_deleted(ts, Rpl, Lpl);
                        
                        pRpl->next = Rpl->next;
                        free( Rp->events );
                        free( Rp->CI );
                        free( Rpl );
                        Rpl = pRpl->next;
                        stat = 0;
                        detectedR = 1;
                    }
                }
                if (!detectedR) 
                {
                    Rpl = Rpl->next;
                    pRpl = pRpl->next;
                }
            }
            if (!detectedL)
            {
                Lpl = Lpl->next;
                pLpl = pLpl->next;
            }
        }
             t_output_best_patterns_on_step(ts);
        
    }

}
