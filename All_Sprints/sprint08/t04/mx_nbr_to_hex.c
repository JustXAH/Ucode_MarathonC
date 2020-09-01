#include "get_address.h"
#include <stdlib.h>

static int line_len(unsigned long tmp_nbr, int l) {
    while (tmp_nbr > 0) {
        tmp_nbr /= 16;
        l++;
    }
    return l;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    int len = 0;
    int hex = 0;
    char *string = NULL;

    if (nbr == 0) {
        string = mx_strnew(1);
        string[0] = '0';
        return string;
    }
    len = line_len(nbr, len);
    string = mx_strnew(len);
    for(int i = len - 1; i >= 0; i--) {
        hex = nbr % 16;
        nbr /= 16;
        if (hex < 10)
            string[i] = hex + 48;
        else
            string[i] = hex + 87;
    }
    return string;
}
