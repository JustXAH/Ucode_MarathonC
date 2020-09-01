#include <stdlib.h>
#include <stdio.h>

static char *str_new(const int size) {
    char *arr = NULL;

    if (size < 0)
        return NULL;
    arr = (char *)malloc((sizeof(char)) * (size + 1));
    for (int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}

static int str_length(const char *arr) {
    int len = 0;

    while (arr[len])
        len++;
    return len;
}

static char *str_cpy(char *dst, const char *arr) {
    int i;

    for (i = 0; arr[i] != '\0'; i++)
        dst[i] = arr[i];
    dst[i] = '\0';
    return dst;
}

char *mx_strdup(const char *str) {
    char *dst = str_new(str_length(str));

    dst = str_cpy(dst, str);
    return dst;
}
