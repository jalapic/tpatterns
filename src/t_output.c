#include "t_output.h"


void t_printf_pattern( FILE *fp, t_pattern *tp, t_time_series *ts )
{
    int i;
    for( i = 0; i < tp->nevents; i++ )
        fprintf( fp, "%s|", ts->event_sign[ tp->events[i] ] ); 
}

void t_output_patterns(t_time_series* ts, t_pattern_list* pl, int n)
{
	int i;
	FILE* fp;
	t_pattern_list *Ipl;
	
	#ifdef MATLAB_ENABLE
		int m_it = 0;
		char str[8192];
		if ( tm_final )
		{
			str[0] = '\0';
			pattern_strings = (char**) malloc( num_patterns[ iteration_number - 1 ] * sizeof( char* ) );
		}
	#endif
	fp = ts->output;
	/*
		str + strlen(str) - just simple concatenation
	*/
	
	for ( Ipl = pl; Ipl != NULL && ( n != 0 ); Ipl = Ipl->next )
	{
		for ( i = 0; i < Ipl->pat.nevents; i++ )
		{
			#ifdef MATLAB_ENABLE
				mexPrintf( "%s", ts->event_sign[ Ipl->pat.events[i] ] );
				if ( tm_final && (Ipl->pat.nevents > 1) )
					sprintf( ( str + strlen(str) ), "%s", ts->event_sign[ Ipl->pat.events[i] ] );
			#else
				fprintf(fp, "%s", ts->event_sign[ Ipl->pat.events[i] ] );
			#endif
			
			if ( i != Ipl->pat.nevents - 1 )
			{
				#ifdef MATLAB_ENABLE	
					mexPrintf( "[%d %d]", Ipl->pat.CI[i].l, Ipl->pat.CI[i].r);
					if ( tm_final && (Ipl->pat.nevents > 1))
						sprintf( ( str + strlen(str) ), "[%d %d]", Ipl->pat.CI[i].l, Ipl->pat.CI[i].r );
				#else
					fprintf(fp, "[%d %d]", Ipl->pat.CI[i].l, Ipl->pat.CI[i].r);
				#endif
			}
		}
		#ifdef MATLAB_ENABLE
            mexPrintf( " <%.10f> {%d}(%d):", Ipl->pat.significance, Ipl->pat.N, Ipl->pat.N, Ipl->pat.nevents);
			if ( tm_final && (Ipl->pat.nevents > 1))
				sprintf( ( str + strlen(str) ), " <%.7f> {%d}:", Ipl->pat.significance, Ipl->pat.N);
		#else
            fprintf(fp, " <%.10f> {%d}(%d):", Ipl->pat.significance, Ipl->pat.N, Ipl->pat.nevents);
		#endif
					
		for ( i = 0; i < Ipl->pat.N; i++ )
		{
			#ifdef MATLAB_ENABLE
				mexPrintf( " (%d %d)", Ipl->pat.ind[i].l, Ipl->pat.ind[i].r);
				if ( tm_final && (Ipl->pat.nevents > 1))
					sprintf( ( str + strlen(str) ), " (%d %d)", Ipl->pat.ind[i].l, Ipl->pat.ind[i].r);
			#else
				fprintf(fp, " (%d %d)", Ipl->pat.ind[i].l, Ipl->pat.ind[i].r);
			#endif
		}
		
        #ifdef MATLAB_ENABLE
            mexPrintf( ":");
        #else
            fprintf(fp, ":");
        #endif
        for ( i = 0; i < Ipl->pat.tree_len; i++ )
        {
            #ifdef MATLAB_ENABLE
                if ( Ipl->pat.tree[i] != -1 )
                    mexPrintf( "%s", ts->event_sign[Ipl->pat.tree[i]]);
                else
                    mexPrintf( "*");
            #else
                if ( Ipl->pat.tree[i] != -1 )
                    fprintf(fp, "%s", ts->event_sign[Ipl->pat.tree[i]]);
                else 
                    fprintf(fp, "*");
            #endif
        }
        
		#ifdef MATLAB_ENABLE
			if ( tm_final && (Ipl->pat.nevents > 1))
			{
				pattern_strings[m_it] = (char*) malloc(  ( strlen(str) + 1) * sizeof( char ) );
				strcpy( pattern_strings[m_it], str );
				m_it++;
				str[0] = '\0';
			}
			mexPrintf( "\n");
		#else
			fprintf(fp, "\n");
		#endif
		n--;
	} 
}

void t_output_report_info(t_time_series* ts)
{
	int i;
	#ifdef MATLAB_ENABLE
		mexPrintf( "Starting pattern detection...\nFile = [%s]\nci_strategy = ", ts->fname);
	#else
		fprintf(ts->output, "Starting pattern detection...\nFile = [%s]\nci_strategy = ", ts->fname);
	#endif
	switch ( ts->ci_strategy )
	{
		case T_LONGEST_CI:
			#ifdef MATLAB_ENABLE
				mexPrintf( "[longest_CI]");
			#else
				fprintf( ts->output, "[longest_CI]");
			#endif
			break;
		case T_SHORTEST_CI:
			#ifdef MATLAB_ENABLE
				mexPrintf( "[shortest_CI]");
			#else
				fprintf( ts->output, "[shortest_CI]");
			#endif
			break;
		case T_SIGNIFICANT_CI:
			#ifdef MATLAB_ENABLE
				mexPrintf( "[significant_CI]");
			#else
				fprintf( ts->output, "[significant_CI]");
			#endif
			break;
	} 
	
	#ifdef MATLAB_ENABLE
		mexPrintf( "\nFactorial table size = [ %d ]\nCombinations table size = [ %dx%d ]\nAllow same events = [%d]", logfac_table_size, C_iz_N_po_k_table_K, C_iz_N_po_k_table_N, ts->allow_same_events_in_pattern);
	#else
		fprintf( ts->output, "\nFactorial table size = [ %d ]\nCombinations table size = [ %dx%d ]\nAllow same events = [%d]", logfac_table_size, C_iz_N_po_k_table_K, C_iz_N_po_k_table_N, ts->allow_same_events_in_pattern);
	#endif
	
	#ifdef MATLAB_ENABLE
		mexPrintf( "\n");
	#else
		fprintf( ts->output, "\n");
	#endif
	if ( ts->nlevels )
	{
		#ifdef MATLAB_ENABLE
			mexPrintf( "-----------\nLength Alpha Nmin\n");
		#else
			fprintf( ts->output, "-----------\nLength Alpha Nmin\n" );
		#endif
		for ( i = 0; i < ts->nlevels; i++ )
		{
			#ifdef MATLAB_ENABLE
				mexPrintf( "%d %f %d\n", ts->levels[i].len, ts->levels[i].alpha, ts->levels[i].Nmin );
			#else
				fprintf( ts->output, "%d %f %d\n", ts->levels[i].len, ts->levels[i].alpha, ts->levels[i].Nmin );
			#endif
		}
	}
	else
	{
		#ifdef MATLAB_ENABLE
			mexPrintf( "alpha = [%f] Nmin = [%d]\n", ts->alpha, ts->Nmin );
		#else
			fprintf( ts->output, "alpha = [%f] Nmin = [%d]\n", ts->alpha, ts->Nmin );
		#endif
	}
    
    #ifdef MATLAB_ENABLE
        mexPrintf( "---PATTERNS---\n" );
    #else
        fprintf( ts->output, "---PATTERNS---\n" );
    #endif
}

void t_output_print_iteration(t_time_series* ts, int n)
{
	#ifdef MATLAB_ENABLE
		mexPrintf( "---ITERATION---\n%d\n", n);
	#else
		fprintf( ts->output, "---ITERATION---\n%d\n", n);
	#endif
}

void t_output_print_found_patterns(t_time_series* ts, t_pattern_list* pl)
{
	#ifdef MATLAB_ENABLE
		mexPrintf( "---FOUND PATTERNS---\n");
	#else
		fprintf( ts->output, "---FOUND PATTERNS---\n");
	#endif
	t_output_patterns(ts, pl, -1);
	
}

void t_output_print_deleted(t_time_series* ts, t_pattern_list* Lpl, t_pattern_list* Rpl)
{
	#ifdef MATLAB_ENABLE
		mexPrintf( "\tDELETED: ");
	#else
		fprintf( ts->output, "\tDELETED: ");
	#endif
	t_output_patterns(ts, Lpl, 1);
	#ifdef MATLAB_ENABLE
		mexPrintf( "\tBY     : ");
	#else
		fprintf( ts->output, "\tBY     : ");
	#endif
	t_output_patterns(ts, Rpl, 1);
	#ifdef MATLAB_ENABLE
		mexPrintf( "\n");
	#else
		fprintf( ts->output, "\n");
	#endif
}

void t_output_best_patterns_on_step(t_time_series* ts)
{
	#ifdef MATLAB_ENABLE
		int i;
		t_pattern_list *Ipl, *Dpl;
		if ( iteration_number == 1 )
		{
			patterns_it = ( t_pattern_list**) malloc( sizeof( t_pattern_list* ) );
			max_pattern_length = ( int* ) malloc( sizeof( int ) );
			num_patterns = ( int* ) malloc( sizeof( int ) );
		}
		else
		{
			patterns_it = ( t_pattern_list**) realloc( patterns_it, iteration_number * sizeof( t_pattern_list* ) );
			max_pattern_length = ( int* ) realloc( max_pattern_length,  iteration_number * sizeof( int ) );
			num_patterns = ( int* ) realloc( num_patterns,  iteration_number * sizeof( int ) );
		}
		
		patterns_it[ iteration_number - 1 ] = ( t_pattern_list* ) malloc( sizeof( t_pattern_list ) );
		patterns_it[ iteration_number - 1 ]->next = NULL;
		max_pattern_length[ iteration_number - 1 ] = 0;
		num_patterns[ iteration_number - 1 ] = 0;

		for ( Ipl = ts->patterns->next; Ipl != NULL; Ipl = Ipl->next )
		{
			if ( Ipl->pat.nevents == 1 ) continue; /* Pseudo pattern is not result */
			num_patterns[ iteration_number - 1 ]++;
			max_pattern_length[ iteration_number - 1 ] = ( max_pattern_length[ iteration_number - 1 ] < Ipl->pat.nevents ) ? Ipl->pat.nevents : max_pattern_length[ iteration_number - 1 ]; /* Just find max pattern length... Yeah a bit long expression ))*/
			Dpl = add_pattern( patterns_it[ iteration_number - 1 ], Ipl->pat.events, Ipl->pat.nevents );
			Dpl->pat.N = Ipl->pat.N;
			Dpl->pat.ind = ( double_series* ) malloc( Dpl->pat.N * sizeof (double_series ) );
			Dpl->pat.CI = ( double_series* ) malloc ( ( Dpl->pat.nevents - 1 ) * sizeof (double_series ) );
			memcpy( Dpl->pat.ind, Ipl->pat.ind, Dpl->pat.N * sizeof( double_series ) );
			memcpy( Dpl->pat.CI, Ipl->pat.CI, ( Dpl->pat.nevents - 1 ) * sizeof (double_series ) );
			Dpl->pat.significance = Ipl->pat.significance;
		}
		
		tm_final = 1;
		mexPrintf( "---BEST PATTERNS ON STEP---\n");
	#else
		fprintf( ts->output, "---BEST PATTERNS ON STEP---\n");
	#endif

	
	t_output_patterns(ts, ts->patterns->next, -1);
	
	#ifdef MATLAB_ENABLE
		tm_final = 0;
	#endif
}

