#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);


char *mx_strtrim(const char *str) {
    int i = 0;
    int ku = 0;
    char *dst = NULL;

    if (str == NULL)
        return NULL;
    while (mx_isspace(str[i]))
        i++;
    ku = i;
    for (; str[ku] != '\0'; ku++) {
        if (mx_isspace(str[ku]) > 0 && mx_isspace(str[ku + 1]) > 0)
            break;
    }
    dst = mx_strnew(ku - i);
    dst = mx_strncpy(dst, &(str[i]), ku - i);
    return dst;
}
