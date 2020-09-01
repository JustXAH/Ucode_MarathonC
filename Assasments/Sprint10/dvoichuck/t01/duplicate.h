#ifndef DUPLICATE
#define DUPLICATE

#include <stdlib.h>
int mx_sort_arr_int(int *arr, int size);

typedef struct s_intarr
{
    int *arr;
    int size;
}               t_intarr;
t_intarr *mx_del_dup_sarr(t_intarr *src);

#endif
