#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include "t_time_sequence.h"
#include "t_pattern.h"
#include <omp.h>

void print_usage()
{
	printf("ololo");
	exit(0);
}

int read_alpha_N(t_time_series *ts, FILE* fp)
{
	int i = 0;
	int c;
	while ( i < 2 )
	{
		if ( fgetc(fp) == '\n' ) i++;
	}
	ts->nlevels = 0;
	while ( !feof(fp) )
	{
		if (ts->nlevels == 0 )
			ts->levels = ( t_levels* ) malloc( sizeof( t_levels ) );
		else
			ts->levels = ( t_levels* ) realloc( ts->levels, ( ts->nlevels + 1 ) * sizeof( t_levels ) );
 		fscanf(fp, "%d\t\t%lf\t\t%d\n", &ts->levels[ ts->nlevels ].len, &ts->levels[ ts->nlevels ].alpha, &ts->levels[ ts->nlevels ].Nmin);
		ts->nlevels++;
		 
	}
	fclose(fp);
        return 0;
}

int main(int argc, char *argv[])
{
  t_time_series ts;
  FILE *fp;
  int next_option;
  int nthreads=3, tid;

  const char* const short_options = "hi:o:s:n:c:p:lfta:q:e";
  const struct option long_options[] = {
	{ "help",				0, NULL, 'h'},
	{ "input", 				1, NULL, 'i'}, //name of input file
	{ "output",				1, NULL, 'o'}, //output file
        { "min_significance",	                1, NULL, 's'}, //min alpha
	{ "min_n",				1, NULL, 'n'}, //min Nab
        { "custom_levels",                      1, NULL, 'c'}, //use different alpha and Nmin on different patterns
        { "prob_eval",                          1, NULL, 'p'}, //type of probability calculation: auto or manual
        { "use_poisson_aprox",                  0, NULL, 'l'},
        { "use_norm_aprox",                     0, NULL, 'f'},
        { "use_tabulation",             0, NULL, 't'},
	{ "auto_prob_eval",		1, NULL, 'a'}, //automatic choise of probability aproximation
	{ "ci_strategy",		1, NULL, 'q'}, //how to choose critical interval ( ci_shortest | ci_longest | ci_most_significant )
	{ "no_same_events",		0, NULL, 'e'},
        { NULL,				0, NULL,  0 }
  };
    ts.ci_strategy = T_SHORTEST_CI;
    ts.output = stdout;
    ts.alpha = 0.005;
    ts.Nmin = 3;
    ts.nlevels = 0;
    ts.allow_same_events_in_pattern = 1;
  	logfac_table_size = 0;
  	C_iz_N_po_k_table_K = C_iz_N_po_k_table_N = 0;
  	
  do {
  	next_option = getopt_long( argc, argv, short_options, long_options, NULL );
  	switch( next_option )
  	{
		case 'h': 
			print_usage();
			break;
		case 's':
			ts.alpha = atof( optarg );
			break;
		case 'n':
			ts.Nmin = atoi( optarg );
			break;
		case 'e':
			ts.allow_same_events_in_pattern = 0;
			break; 
		case 'i':
			strcpy( ts.fname, optarg );
			break;
		case 'o':
			if (! ( ts.output = fopen(optarg, "w") ) )
			{
				fprintf(stderr, "Can't write %s", optarg);
				exit(0);
			}
			break;
		case 't':
			logfac_table_size = 1;
			C_iz_N_po_k_table_K = C_iz_N_po_k_table_N = 1;
			break;
		case 'q':
			if ( strcmp( optarg, "ci_shortest") == 0 ) ts.ci_strategy = T_SHORTEST_CI;
			else if ( strcmp( optarg, "ci_longest") == 0 ) ts.ci_strategy = T_LONGEST_CI;
			else if ( strcmp( optarg, "ci_most_significant") == 0 ) ts.ci_strategy = T_SIGNIFICANT_CI;
			else 
			{
				printf("\n Unknown parameter for --ci_strategy should be ( ci_shortest | ci_longest | ci_most_significant )\n");
				exit(0);
			}
			break;
		case 'c':
			if ( !(fp = fopen(optarg, "r")) )
			{
				fprintf(stderr, "Can't open %s", optarg);
				exit(0);
			}
			read_alpha_N(&ts, fp );
			break;
		case '?': 
			print_usage();
			break;
		case -1:
			break; 
	}
  } while ( next_option != -1 );
  
  //omp_set_num_threads( 1 );

      
  
  t_read_structs_from_file(&ts, ts.fname); 
  t_detect_patterns(&ts);
  fclose(ts.output);

  #pragma omp parallel private(nthreads, tid)
  {
      tid = omp_get_thread_num();
      printf("Hello World from thread = %d\n", tid);
      
      if (tid == 0) 
      {
          nthreads = omp_get_num_threads();
          printf("Number of threads = %d\n", nthreads);
      }
      
  }  //All threads join master thread and disband

  return 0;
}
