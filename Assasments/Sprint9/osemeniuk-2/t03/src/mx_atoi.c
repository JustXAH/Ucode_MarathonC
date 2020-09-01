#include "../inc/minilibmx.h"

int mx_atoi(const char *str) {
    unsigned long long int number = 0;
    int i = 0;
    int ch = 1;

    while(mx_isspace(str[i]) == 1)
        i++;
    if(str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            ch = -1;
        i++;
    }    
    while(mx_isdigit(str[i]) == 1) {
        number =  number  * 10 + (str [i] - '0');
        if (ch > 0 && number > 9223372036854775807)
            return -1;
        if (ch < 0 && number > 9223372036854775807)
            return 0;
        i++;
    }   
    return ch * number;
}
