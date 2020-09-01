#include <stdio.h>

int mx_sort_arr_int(int *arr, int size) {
    int temp;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = (size - 1); j > i; j--) {
            if (arr[j - i] > arr[j]) {
                temp = arr[j - i];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return i;
}
