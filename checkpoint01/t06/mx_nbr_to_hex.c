#include <stdlib.h>

static char *str_new(const int size) {
    char *arr = NULL;

    if (size < 0)
        return NULL;
    arr = (char *)malloc((sizeof(char)) * (size + 1));
    for (int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long n = nbr;
    int len = 0;
    int hex = 0;
    char *str = NULL;

    while (n != 0) {
        n /= 16;
        len++;
    }
    str = str_new(len);
    for (int i = len - 1; nbr != 0; i--) {
        hex = nbr % 16;
        nbr /= 16;
        if (hex < 10)
            str[i] = hex + 48;
        else
            str[i] = hex + 87;
    }
    return str;
}
