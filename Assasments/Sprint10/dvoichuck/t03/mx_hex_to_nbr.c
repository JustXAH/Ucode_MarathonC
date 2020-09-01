#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long num = 0;
    int n = 0;
    unsigned long j = 1;

    if (!hex)
        return 0;
    for (;hex[n + 1]; n++)
        j *= 16;
    for (int i = 0; hex[i]; i++) {
        if (mx_isdigit(hex[i]))
            num += (hex[i] - 48) * j;
        if (mx_isupper(hex[i]) && hex[i] <= 'F')
            num += (hex[i] - 55) * j;
        if (mx_islower(hex[i]) && hex[i] <= 'f')
            num += (hex[i] - 87) * j;
        j /= 16;
    }
    return num;
}
