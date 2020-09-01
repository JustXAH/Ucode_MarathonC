void mx_arr_rotate(int *arr, int size, int shift) {
    int bubble;
    int i = 0;
    int j = 0;

    if (shift < 0) {
        for (i = 0; i > shift; i--) {
            bubble = arr[0];
            for (j = 0; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[j] = bubble;
        }
    }
    for (i = 0; i < shift; i++) {
        bubble = arr[size - 1];
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = bubble;
    }
}
