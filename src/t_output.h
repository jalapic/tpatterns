#ifndef T_OUTPUT_H
#define T_OUTPUT_H
#include "t_time_sequence.h"
#include "t_pattern.h"
#include "t_helper.h"
#include <stdlib.h>
#include <stdio.h>

#ifdef MATLAB_ENABLE
	t_pattern_list** patterns_it; /* pattern list dor every iteration */
	int iteration_number = 0;
	int *max_pattern_length;
	int *num_patterns; /*number of detected patterns on iteration*/
	char** pattern_strings;
	int tm_final = 0;
#endif

void t_printf_pattern( FILE *fp, t_pattern *tp, t_time_series *ts );
void t_output_patterns(t_time_series* ts, t_pattern_list* pl, int n);
void t_output_report_info(t_time_series* ts);
void t_output_print_iteration(t_time_series* ts, int n);
void t_output_print_found_patterns(t_time_series* ts, t_pattern_list* pl);
void t_output_print_deleted(t_time_series* ts, t_pattern_list* Lpl, t_pattern_list* Rpl);
void t_output_best_patterns_on_step(t_time_series* ts);

void t_print(FILE* fp, const char *str);
void t_print_d(FILE* fp, const char *str, int d);
void t_print_f(FILE* fp, const char *str, float f);
void t_print_s(FILE* fp, const char *str, const char *s); 
#endif /* T_OUTPUT_H */

