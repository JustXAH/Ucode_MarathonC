#include <stdbool.h>
#include <stdlib.h>

int mx_comparator (const int *arr, int size, int x, bool (*compare)(int, int)) {
    int i = 0;

    if (arr == NULL && size > 0)
        return -1;
    for (i = 0; i < size; i++)
        if (compare(x, arr[i]))
            return i;
    return -1;
}
