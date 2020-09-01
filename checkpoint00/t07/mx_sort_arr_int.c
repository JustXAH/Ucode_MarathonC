void mx_sort_arr_int(int *arr, int size) {
    int a = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j - 1] > arr[j])
                a = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = a;
        }
    }
}
