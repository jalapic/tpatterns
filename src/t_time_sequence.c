#include "t_time_sequence.h"
#include "t_pattern.h"

int t_add_event_type(t_time_series* ts, char* event_name)
        /* TODO: check memory */
{
    int i;
     if ( t_index_of(ts, event_name) != -1 ) return 2;
    ts->num_event_types++;
    if ( ts->num_event_types == 1 )
    {
        ts->allocated_num_event_types += PATTERN_ALLOCATE_BLOCK_SIZE;
        ts->event_sign = ( char** ) malloc( ts->allocated_num_event_types * sizeof( char* ) );
        ts->N = ( unsigned int * ) malloc( ts->allocated_num_event_types * sizeof( unsigned int ) );
        memset( ts->N, 0, ts->allocated_num_event_types*sizeof( unsigned int ) );
        ts->allocated_N = ( unsigned int * ) malloc( ts->allocated_num_event_types * sizeof( unsigned int ) );
        ts->event_i = ( unsigned int ** ) malloc( ts->allocated_num_event_types * sizeof( unsigned int * ) );
    }
    if ( ts->allocated_num_event_types < ts->num_event_types )
    {
        ts->allocated_num_event_types += PATTERN_ALLOCATE_BLOCK_SIZE;
        ts->event_sign = ( char** ) realloc(ts->event_sign, ts->allocated_num_event_types * sizeof( char* ) );
        ts->N = ( unsigned int * ) realloc(ts->N, ts->allocated_num_event_types * sizeof( unsigned int ) );
        for ( i = ts->allocated_num_event_types - PATTERN_ALLOCATE_BLOCK_SIZE; i < ts->allocated_num_event_types; i++ ) ts->N[i]=0;
        ts->allocated_N = ( unsigned int * ) realloc( ts->allocated_N, ts->allocated_num_event_types * sizeof( unsigned int ) );
        ts->event_i = ( unsigned int ** ) realloc( ts->event_i, ts->allocated_num_event_types * sizeof( unsigned int * ) );
    }
    ts->event_sign[ ts->num_event_types - 1 ] = (char*) malloc( (strlen(event_name) + 1) * sizeof(char) );
    strcpy( ts->event_sign[ ts->num_event_types - 1 ], event_name );
    return 1;
}

int t_index_of(t_time_series* ts, char* event_name)
{
  int i;
  for ( i = 0; i < ts->num_event_types; i++)
  {
    if ( strcmp( ts->event_sign[i], event_name) == 0 ) return i;
  }
  return -1;
}

int t_add_event_ent(t_time_series* ts, char* event_name, unsigned int index)
{
    int i;
    i = t_index_of(ts,  event_name );
    ts->N[i]++;

    if ( ts->N[i] == 1 )
    {
        ts->allocated_N[i] = PATTERN_ALLOCATE_BLOCK_SIZE;
        ts->event_i[i] = ( unsigned int * ) malloc( ts->allocated_N[i] * sizeof( unsigned int ) );
    }
    if ( ts->allocated_N[i] <= ts->N[i] )
    {
        ts->allocated_N[i] += PATTERN_ALLOCATE_BLOCK_SIZE;
        ts->event_i[i] = ( unsigned int * ) realloc(ts->event_i[i], ts->allocated_N[i] * sizeof( unsigned int ) );
	}
    ts->event_i[i][ ts->N[i] - 1 ] = index;
}

int t_read_structs_from_file(t_time_series* ts, char* fname)
{
    FILE* fp;
    unsigned int i, j, time, Namax=0;
    char c, buf1[1024], buf2[1024];
    int buf[3];
    t_pattern_list *tmp;
    ts->patterns = (t_pattern_list*) malloc( sizeof( t_pattern_list ) );
    ts->patterns->next=NULL;
	
    if (! ( fp = fopen(fname, "r") ) )
    {
        return 0;
    }
	

    ts->allocated_num_event_types = 0;
    ts->num_event_types = 0;

    fscanf(fp, "Time\tEvent\n"); 
    fscanf(fp, "0\t:\n"); 
    
    for ( i = 0; !feof(fp); i++ )
    {
        fscanf(fp, "%s\t%s\n", buf1, buf2);
        time = atoi(buf1);
        if ( buf2[0] == '&' )
        {
            ts->Nt = time;
            break;
        }
	
        t_add_event_type(ts, buf2);
        t_add_event_ent(ts, buf2, time);
    }
    fclose(fp);

	/* Make pattern structs */
	for ( i = 0; i < ts->num_event_types; i++ )
	{
		Namax =  Namax < ts->N[i] ? ts->N[i] : Namax;  
		buf[0] = i;
		tmp = add_pattern(ts->patterns, buf, 1);
        tmp-> pat.tree = (int*) malloc( sizeof(int) );
        
        tmp-> pat.tree[0] = i;
        tmp-> pat.tree_len = 1;
        
        tmp->pat.ind = ( double_series*) malloc( sizeof(double_series) * ts->N[i] );
		tmp->pat.N = ts->N[i];
		for ( j = 0; j < ts->N[i]; j++)
		{
			tmp->pat.ind[j].l = tmp->pat.ind[j].r = ts->event_i[i][j];
		}
	}
	if (logfac_table_size)
	{
		fill_logfac_table( Namax+1 );
		fill_C_iz_N_po_k_table( Namax+1, Namax+1);
	}
	
    return 1;
}




void t_choose_significance_levels(t_time_series *ts, double* alpha, int* Nmin, int n)
{
	int i;
	*alpha = ts->alpha;
	*Nmin = ts->Nmin;
	if ( ts->nlevels )
	{
		for ( i = 0; ( i < ts->nlevels ) && ( ts->levels[i].len <= n ) ; i++ )
		{
			*alpha = ts->levels[i].alpha;
			*Nmin = ts->levels[i].Nmin;
		}
	}
}


t_pattern_lst*  t_new_blank_lst_node( void )
{
    t_pattern_lst* node;
    node = ( t_pattern_lst * ) malloc( sizeof( t_pattern_lst ) );
    node->pat  = NULL;
    node->next = NULL;
    return node;
}

t_pattern_lst*  t_new_alloc_lst_node( void )
{
    t_pattern_lst* node;
    node = ( t_pattern_lst * ) malloc( sizeof( t_pattern_lst ) );
    node->pat  = ( t_pattern * ) malloc( sizeof( t_pattern ) );
    node->next = NULL;
    return node;
}

void            t_push_lst( t_pattern_lst* pl, const t_pattern_lst* node )
{

    for( ; pl->next != NULL; pl = pl->next );
    pl->next = node;
}

void            t_delete_all_lst( t_pattern_lst* pl )
{
    t_pattern_lst *it;
    it = pl;
    while( it != NULL )
    {
        it = pl -> next;
        t_delete_node( pl );
        pl = it;
    }
}

void            t_delete_nodes_lst( t_pattern_lst* pl )
{
    t_pattern_lst *it;
    it = pl;
    while( it != NULL )
    {
        it = pl -> next;
        free( pl );
        pl = it;
    }
}

void            t_delete_node( t_pattern_lst* node )
{
    if ( node->pat )
        t_delete_pattern( node->pat );
    free( node );
}

void t_delete_pattern( t_pattern * pat )
{
    free( pat->tree );
    free( pat->events );
    free( pat->ind );
    free( pat->CI );
    free( pat );
}

void t_pattern_deep_copy( t_pattern *dst, const t_pattern *src )
{
    dst->N = src->N;
    dst->d1 = src->d1;
    dst->d2 = src->d2;
    dst->significance = src->significance;
    dst->nevents = src->nevents;
    dst->tree_len = src-> tree_len;
    dst->new_one = src-> new_one;

    dst->ind = ( double_series * ) malloc( sizeof( double_series ) * dst->N );
    memcpy( dst->ind, src->ind, sizeof( double_series ) * dst->N );

    dst->CI = ( double_series * ) malloc( sizeof( double_series ) * (dst->nevents - 1)  );
    memcpy( dst->CI, src->CI, sizeof( double_series ) * (dst->nevents - 1) );

    dst->tree = ( int * ) malloc( sizeof( int ) * dst->tree_len );
    memcpy( dst->tree, src->tree, sizeof( int ) * dst->tree_len );

    dst->events = ( int * ) malloc( sizeof( int ) * dst->nevents );
    memcpy( dst->events, src->events, sizeof( int ) * dst->nevents );
}

