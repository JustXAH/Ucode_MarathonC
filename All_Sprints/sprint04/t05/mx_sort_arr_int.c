void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (size - 1); j > i; j--) {
            if (arr[j - 1] > arr[j]) {
                int bubble = arr[j - 1];
                arr[j -1] = arr[j];
                arr[j] = bubble;
            }
        }
    }
}

int main() {
    int array[] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(array, 7);
}

