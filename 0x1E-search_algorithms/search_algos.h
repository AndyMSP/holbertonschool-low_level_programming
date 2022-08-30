#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int rec_bin_search(int *array, int low_idx, int high_idx, int value);
void print_array(int *array, int low_idx, int high_idx);


#endif
