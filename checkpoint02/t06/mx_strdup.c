#include <stdlib.h>

int my_strlen(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

char *my_strcpy(char *dst, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

char *my_strnew (const int size) {
    char *array = NULL;

    if (size < 0)
        return 0;
    array = (char *)malloc((size + 1) * sizeof(char));
    for (int i = 0; i <= size; i++)
        array[i] = '\0';
    return array;
}

char *mx_strdup(const char *str) {
    char *dst = my_strnew(my_strlen(str));

    dst = my_strcpy(dst, str);
    return dst;
}
