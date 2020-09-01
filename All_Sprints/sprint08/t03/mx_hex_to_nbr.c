#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long nbr = 0;
    int n = 0;
    unsigned long dec = 1;

    if (!hex)
        return 0;
    for ( ;hex[n + 1]; n++)
        dec *= 16;
    for (int i = 0; hex[i]; i++) {
        if (mx_isdigit(hex[i]))
            nbr += (hex[i] - 48) * dec;
        else if (mx_isalpha(hex[i])) {
            if (mx_isupper(hex[i]) && hex[i] <= 'F')
                nbr += (hex[i] - 55) * dec;
            else if (mx_islower(hex[i]) && hex[i] <= 'f')
                nbr += (hex[i] - 87) * dec;
        }
        dec /= 16;
    }
    return nbr;
}
