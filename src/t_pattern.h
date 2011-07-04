#ifndef T_PATTERN_H
#define T_PATTERN_H
#include <stdio.h>
#include <stdlib.h>
#include "t_time_sequence.h"
#include "t_output.h"
#include "t_helper.h"
#include <math.h>
#include <time.h>
#include <omp.h>

#define T_PCALC_T_FULL_MEAN 0x0001
#define T_PCALC_TABULATED_FULL 0x0002
#define T_PCALC_POISSON 0x0004
#define T_PCALC_NORMRND 0x0008

double start,stop, time_calc, time_inter, time_compl, time_calc_in;

t_pattern_list* add_pattern(t_pattern_list *pl, int *events, int nevents);
void conc_patterns(t_pattern_list *pl1, t_pattern_list *pl2);
int t_is_subpattern(t_pattern* Lp, t_pattern* Rp);
void t_detect_patterns(t_time_series * ts);
double t_calc_prior_probability (unsigned int Nt, unsigned int Na, unsigned int Nb, unsigned int Nab, unsigned int d, int method);
void t_construct_pattern(t_pattern_list *pl, t_pattern *Lp, t_pattern *Rp, double_series *possible_ds, int Nab, double P_prior, int d1, int d2);
int t_is_equal_ds(double_series* ds1, int n1, double_series* ds2, int n2);
int t_is_intersec(double_series* ds1, double_series* ds2, int n);
int contain_same_events(t_pattern* Lp, t_pattern* Rp);
int t_construct_pair_pat_array( t_pattern*** LPat_pts, t_pattern*** RPat_pts, int *Npairs, const t_time_series* ts );
int t_is_equal_events( t_pattern* Lp, t_pattern* Rp1, t_pattern* Rp2 );
int t_is_equal_events2( t_pattern* Lp, t_pattern* Rp);

int t_check_and_add_candidate( t_pattern_lst* pat_candidates, const t_pattern *Lp, const t_pattern *Rp, int d1, int d2,
                               const double_series *possible_ds, int Nab, double P_prior, const t_time_series *ts       );
t_pattern* t_construct_pattern_sta(t_pattern *Lp, t_pattern *Rp, double_series *possible_ds, int Nab, double P_prior, int d1, int d2);


#endif /* T_PATTERN_H */
