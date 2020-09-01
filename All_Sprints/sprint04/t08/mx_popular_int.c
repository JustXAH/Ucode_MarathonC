#include <stdio.h>

int mx_popular_int(const int *arr, int size) {
    int count = 1;
    int curr_pop;
    int max_pop = 0;
    
    for (int i = 0; i < size; i++) {
        curr_pop = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                curr_pop++;
        }
        if (curr_pop > count) {
            max_pop = arr[i];
            count = curr_pop;
        }
    }
    return max_pop;     
}

 int main() {
     const int arr[5] = {10, 10, 20, 20, 20};

     printf("%d", mx_popular_int(arr, 5));
 }
