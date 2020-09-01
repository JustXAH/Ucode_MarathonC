// #include <stdio.h>
// #include <stdlib.h>
#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int i = 0;
    unsigned int num = 0;
    int sing = 1;
    int count = 0;

    while (mx_isspace(str[i])) 
      i++;
    if ((str[i] == '+' || str[i] == '-') && mx_isdigit(str[i + 1])) {
        if (str[i] == '-')
            sing = -1;
        i++;
    }
    while (mx_isdigit(str[i])) {
        num = num * 10 + (str[i] - 48);
        i++;
        count++;
        if ((sing > 0 && num > 2147483647)) 
            return -1;
        if ((sing < 0 && num > 2147483648)) 
            return 0;
    }
    return sing * num;
}

// int main() {
//     const char *string = "2147483648";
//     printf("%d\n", atoi(string));
//     printf("%d", mx_atoi(string));
// }
