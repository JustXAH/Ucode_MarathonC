#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int bubble = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++)
            if (f(arr[j], arr[j + 1])) {
                bubble = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = bubble;
            }
    }
}
