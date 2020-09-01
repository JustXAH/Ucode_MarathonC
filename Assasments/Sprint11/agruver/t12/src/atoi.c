#include "list.h"

bool mx_isdigit(char c) {
    return (c >= '0' && c <= '9');
}

static bool isspace(char c) {
    return ((c == 32) || (c >= 9 && c <= 13));
}

static int overflow_check(int sign, long long int base, int d) {
    if (sign == -1) {
        if ((base > -(LONG_MIN / 10))
            || ((base == -(LONG_MIN / 10)) && (d > -(LONG_MIN % 10))))
            return 0;
    } else {
        if ((base > (LONG_MAX / 10))
            || ((base == (LONG_MAX/ 10)) && (d > LONG_MAX % 10)))
            return -1;
    }
    return 1;
}
 
int mx_atoi(const char *str) {
    int sign = 1;
    long long int base = 0;
    int i = 0; 

    while (isspace(str[i]))
        i++; 
    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i] == '-');
        i++;
    }
    
    while (mx_isdigit(str[i])) { 
        int overflow = overflow_check(sign, base, str[i] - '0');

        if (overflow != 1)
            return overflow;
        base = 10 * base + (str[i] - '0');
        i++;
    }
    return base * sign;
}
