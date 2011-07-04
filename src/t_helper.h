#ifndef T_HELPER_H
#define T_HELPER_H
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define INV_SQRT_2PI 0.398942280401433

double *logfac_table;
unsigned int logfac_table_size;

double *C_iz_N_po_k_table;
unsigned int C_iz_N_po_k_table_N;
unsigned int C_iz_N_po_k_table_K;

int fill_logfac_table(unsigned int size);

int fill_C_iz_N_po_k_table(unsigned int N, unsigned int K);
double C_iz_N_po_k(unsigned int Na, unsigned int i);

double norm_rnd(double x, double mu, double sigma);
#endif /* T_HELPER_H */
