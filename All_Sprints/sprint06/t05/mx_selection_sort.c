int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

static int mx_auditor(int count, int min, char **arr, int size) {
    char *bubble;

    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if ((mx_strlen(arr[j])) < (mx_strlen(arr[min])))
                min = j;
            if (((mx_strlen(arr[j])) == (mx_strlen(arr[min])))
                && (mx_strcmp(arr[min], arr[j]) > 0))
                min = j;
        }
        if (min != i) {
            bubble = arr[i];
            arr[i] = arr[min];
            arr[min] = bubble;
            count++;
        }
    }
    return count;
}

int mx_selection_sort(char **arr, int size) {
    int count = 0;
    int min = 0;

    count = mx_auditor(count, min, arr, size);
    return count;
}
