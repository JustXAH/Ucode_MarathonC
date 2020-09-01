#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int i = 0;
    long long int num = 0;
    int sing = 1;

    if ((str[i] == '+' || str[i] == '-') && mx_isdigit(str[i + 1])) {
        if (str[i] == '-')
            sing = -1;
        i++;
    }
    if ((str[i + 1] == '-') || (str[i + 1] == '+'))
        return 0;
    while (mx_isdigit(str[i])) {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    if (str[i])
        return 0;
    return sing * num;
}
