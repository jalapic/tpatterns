    #include "t_pattern.h"

t_pattern_list* add_pattern(t_pattern_list *pl, int *events, int nevents )
{
    t_pattern_list* it;
    for ( it =  pl; it->next != NULL; it = it->next);
    it->next = ( t_pattern_list* ) malloc( sizeof( t_pattern_list ) );
    it->next-> pat.new_one = 1;
    it->next-> pat.N = 0;
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
         start = clock();
        for ( i = 0; i < Nab; i++)
        {
            
            t=1;
            t = C_iz_N_po_k_table[ Na * C_iz_N_po_k_table_K + i ]; /*exp( logfac_table[ Na ] - logfac_table[ i ] - logfac_table[ Na - i ] );*/
            t *= pow( 1 - Pnb_d, i );
            t *= pow( Pnb_d, Na - i );
            acc += t;
        }   
        stop =clock();
        time_calc_in+=(stop-start)/ CLOCKS_PER_SEC;
   
    } 
    else /*if (  method & T_PCALC_T_FULL_MEAN  )*/ /*  */
    {
        acc = 0;
        //#pragma omp parallel for reduction(+:acc)
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

void t_detect_patterns(t_time_series *ts)
{
    t_pattern_list *new_patterns, *Lpl, *Rpl, *Ipl, *tmp, *pRpl, *pLpl;
    t_pattern *Lp, *Rp, *tmp_Lp, *tmp_Rp;
    double_series *possible_ds, *tmp_possible_ds;
    unsigned int d, d1, d2, nd1, nd2 ,i, j, k, l, m,Nab, tmp_d, tmp_Nab, tmp_d1, tmp_d2;
    int flagL, flagR, find_d1 = 0, pattern_detected = 0, is_duplicate = 0, stat, detectedL, detectedR, iter_num;
    double P_prior, tmp_P_prior;
    int *events;
    int buf[30];
    int iter = 0, kk;
    double alpha = ts->alpha;
    int Nmin = ts->Nmin;
    double err;
    
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
        iter_num = 0;
        for ( Lpl = ts->patterns->next; Lpl != NULL; Lpl = Lpl->next )
        {
            for ( Rpl = ts->patterns->next; Rpl != NULL; Rpl = Rpl->next )
            {
                iter_num++;
                //printf("Progress %f\n", 2*(float)iter_num / (ts->num_event_types*ts->num_event_types) );
                Rp = &Rpl->pat;
                Lp = &Lpl->pat;
                if (! (Rp->new_one || Lp->new_one ) ) continue; /* We don't want to check same patterns more than once */
                
                if ( ( ! ts->allow_same_events_in_pattern) &&  contain_same_events(Rp, Lp)  ) continue; 
                find_d1 = 0;
                pattern_detected = 0;
                switch ( ts->ci_strategy )
                {
                    case T_SHORTEST_CI:
                        tmp_d = ts->Nt;
                        break;
                    case T_LONGEST_CI:
                        tmp_d = 0;
                        break;
                    case T_SIGNIFICANT_CI:
                        tmp_P_prior = 100;
                        tmp_d = 0;
                }
                tmp_possible_ds = NULL;
                //#define NOTDEF
                #ifdef NOTDEF
                for ( d1 = 1; !find_d1;  )
                {
                /*
                TODO: nu ty zneash...
                */
                    find_d1 = 1;
                    nd1 = ts->Nt+1;
                    flagR = 1;
                    for ( d2 = ts->Nt; flagR && ( d1 <= d2 ); )
                    {
                        /*
                        TODO: If probability of [d1 d2] with N....
                        
                        iterate through CIs by order!!!
                        */
                        possible_ds = ( double_series* ) malloc(  ( (Lp->N < Rp->N )? Lp->N : Rp->N ) * sizeof( double_series) );
                        nd2 = 0;
                        flagL = flagR = 0;
                        Nab = 0; /* how many times Rp is after Lp in [d1;d2] interval */
                        /* for every pattern occurence */
                        start = clock();
                        for ( i = 0; i < Lp->N; ++i )
                        {
                            /* We don't allow interlapping intervals */
                            if ( Nab && ( Lp->ind[i].l <= possible_ds[ Nab - 1].r) ) continue; 
                            
                            for ( j = 0; j < Rp->N; ++j )
                            {
                                if ( Lp->ind[i].r >= Rp->ind[j].l ) continue; /* Lp should be before Rp */
                                d = Rp->ind[j].l - Lp->ind[i].r ;

                                /* find next [d1,d2] */
                                if ( ( d > d1 ) && ( d < nd1 ) )
                                {
                                    nd1 = d;
                                    flagL = 1;
                                    find_d1 = 0;
                                }
                                if ( ( d < d2 ) && ( d > nd2 ) )
                                {
                                    nd2 = d;
                                    flagR = 1;
                                }
                                
                                if ( ( Rp->ind[j].l >= Lp->ind[i].r + d1 ) && ( Rp->ind[j].l <= Lp->ind[i].r + d2 ) ) 
                                {
                                    /*
                                    TODO: move possible_ds creation to pattern adding
                                    */
                                    possible_ds[Nab].l = Lp->ind[i].l;
                                    possible_ds[Nab].r = Rp->ind[j].r;
                                    Nab++;
                                    break;
                                }
                            }
                        }
                        stop = clock();
                        time_inter+=(stop-start)/ CLOCKS_PER_SEC;
                        start = clock();
                        P_prior = t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d2-d1+1, T_PCALC_TABULATED_FULL);
                        stop=clock();
                        time_calc+=(stop-start)/ CLOCKS_PER_SEC;
                        // printf("%f %f %f\n", P_prior, t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d2-d1+1, T_PCALC_POISSON), t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d2-d1+1, T_PCALC_NORMRND) );
                        /*err = t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d2-d1+1, T_PCALC_T_FULL_MEAN) -
                            t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d2-d1+1, T_PCALC_POISSON | T_PCALC_T_FULL_MEAN);
                        if ( err >0.0001)
                             printf("%f\n", err);*/
                        t_choose_significance_levels(ts, &alpha, &Nmin, Lp->nevents + Rp->nevents);
                        if ( (P_prior <= alpha)  && (Nab > Nmin) )
                        {
                                pattern_detected = 1;
                                if (  ( P_prior < tmp_P_prior) && ( ts->ci_strategy == T_SIGNIFICANT_CI ) ||
                                      ( d2 - d1 + 1 < tmp_d )  && ( ts->ci_strategy == T_SHORTEST_CI    ) ||
                                      ( d2 - d1 + 1 > tmp_d )  && ( ts->ci_strategy == T_LONGEST_CI     )    )
                                {
                                    if ( (ts->ci_strategy == T_SIGNIFICANT_CI) || ! ( (d2-d1+1 == tmp_d) && (tmp_Nab > Nab ) ) )
                                    { 
                                        if ( tmp_possible_ds ) free( tmp_possible_ds );
                                        tmp_d = d2 - d1 + 1;
                                        tmp_d1 = d1;
                                        tmp_d2 = d2;
                                        tmp_Lp = Lp;
                                        tmp_Rp = Rp;
                                        tmp_possible_ds = ( double_series* ) malloc( Nab * sizeof( double_series ) );
                                        memcpy( tmp_possible_ds, possible_ds, Nab * sizeof( double_series ) );
                                        tmp_Nab = Nab;
                                        tmp_P_prior = P_prior;
                                    }
                                }                               
                        }
                        free( possible_ds );
                        d2 = nd2;
                    }
                    d1 = nd1;
                }
               // printf("WOOOOO");
               
                
                #else
               printf("Scanning ");
               t_printf_pattern( stdout, Lp, ts);
               printf("  and  ");
               t_printf_pattern( stdout, Rp, ts);
               printf("\n");
               
                for ( i = 0; i < Rp->N; i++ )
                {
                    for ( j = 0; j < Rp->N; j++)
                    {
                        
                        if ( i <= j )
                        {
                          //  printf("L%d %d\n", i,j);
                            for ( k = 0; k < Lp->N; k++ )
                            {
                               
                                if ( Rp->ind[i].l >= Lp->ind[k].r )
                                {
                                    
                                    d1 = Rp->ind[i].l - Lp->ind[k].r;
                                    d2 = Rp->ind[j].l - Lp->ind[k].r;
                                    if ( ( d1 == 0 ) ) break;
                                    d  = d2-d1+ 1;
                                    Nab = 0;
                                    //printf("P %d %d %d\n", Rp->ind[i].l, Rp->ind[j].l, Rp->ind[j].l - Rp->ind[i].l+ 1);
                                    possible_ds = ( double_series* ) malloc(  ( (Lp->N < Rp->N )? Lp->N : Rp->N ) * sizeof( double_series) );
                                   
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
                                    //printf("t %d %d %d\n", d1,d2,d);
                                              //t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d2-d1+1, T_PCALC_TABULATED_FULL);
                                    P_prior = t_calc_prior_probability (ts->Nt, Lp->N, Rp->N, Nab, d,       T_PCALC_TABULATED_FULL);
                                   // if (d<12)
                                    //printf("P %d %d %d %d <%f>\n", d1,d2,d, Nab, P_prior);
                                   //printf("\tLL i=%d j=%d k=%d [%d %d] (%d %d) <%f> {%d}\n", i,j, k, Rp->ind[i].l,Rp->ind[j].l, d1,d2, P_prior, Nab);
                                    t_choose_significance_levels(ts, &alpha, &Nmin, Lp->nevents + Rp->nevents);
                                    if ( (P_prior <= alpha)  && (Nab > Nmin) )
                                    {
                                            pattern_detected = 1;
                                            if (  ( P_prior < tmp_P_prior) && ( ts->ci_strategy == T_SIGNIFICANT_CI ) ||
                                                ( d2 - d1 + 1 < tmp_d )  && ( ts->ci_strategy == T_SHORTEST_CI    ) ||
                                                ( d2 - d1 + 1 > tmp_d )  && ( ts->ci_strategy == T_LONGEST_CI     )    )
                                            {
                                                if ( (ts->ci_strategy == T_SIGNIFICANT_CI) || ! ( (d == tmp_d) && (tmp_Nab > Nab ) ) )
                                                { 
                                                    if ( tmp_possible_ds ) free( tmp_possible_ds );
                                                    tmp_d = d;
                                                    tmp_d1 = d1;
                                                    tmp_d2 = d2;
                                                    tmp_Lp = Lp;
                                                    tmp_Rp = Rp;
                                                    tmp_possible_ds = ( double_series* ) malloc( Nab * sizeof( double_series ) );
                                                    memcpy( tmp_possible_ds, possible_ds, Nab * sizeof( double_series ) );
                                                    tmp_Nab = Nab;
                                                    tmp_P_prior = P_prior;
                                                }
                                            }                               
                                    }
                                    free( possible_ds );
                                }
                            
                        }
                        }
                    }
                }
                #endif
                
                if ( pattern_detected )
                {
                    stat = 0;
                    /* check for duplicate */
                    is_duplicate = 0;
                    for (Ipl = ts->patterns->next; Ipl != NULL; Ipl = Ipl->next)
                    {//TODO: DUPLICATES (ACB) is not (AB)... check for event amount
                        if ( t_is_equal_ds(Ipl->pat.ind, Ipl->pat.N, possible_ds, Nab) )
                        {
                            is_duplicate = 1;
                            break;
                        }
                    }
                    if (!is_duplicate)
                    {
                        t_construct_pattern(new_patterns, tmp_Lp, tmp_Rp, tmp_possible_ds, tmp_Nab, tmp_P_prior, tmp_d1, tmp_d2);
                        stat = 0;
                    }
                    free( tmp_possible_ds );
                }
            }
        }
        start=clock();
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
        stop=clock();
        time_compl+=(stop-start)/ CLOCKS_PER_SEC;
        t_output_best_patterns_on_step(ts);
    }
    printf("\nC=%f(%f) %f %f", time_calc, time_calc_in, time_inter, time_compl);
}