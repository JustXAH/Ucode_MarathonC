#include <stdbool.h>
// #include <stdio.h>

// bool equal_nums(int a, int b) {
//     return a == b;
// }

int mx_comparator(const int *arr, int size, int x, bool(*compare)(int, int)) {
    int res = -1;
    for (int i = 0; i < size; i++)
        if (compare(x, arr[i]))
            res = i;
    return res;
}

// int main(void) {
//     int arr[] =  {1, 2, 3, 4, 5};
//     printf("%i\n", mx_comparator(arr, 5, 3, equal_nums));
//     printf("%i\n", mx_comparator(arr, 5, -1, equal_nums));
//    return 0;
// }
