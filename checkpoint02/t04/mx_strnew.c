#include <stdlib.h>

char *mx_strnew (const int size) {
    char *array = NULL;

    if (size < 0)
        return 0;
    array = (char *)malloc((size + 1) * sizeof(char));
    for (int i = 0; i <= size; i++)
        array[i] = '\0';
    return array;
}
