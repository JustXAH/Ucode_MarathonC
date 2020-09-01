#include <stdlib.h>
#include <stdbool.h>

bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str) {
    int i = 0;
    int j = 0;
    char *dst = NULL;

    if (str == NULL)
        return NULL;
    while (mx_isspace(str[i]))
        i++;
    j = mx_strlen(str) - 1;
    while (mx_isspace(str[j]))
        j--;
    dst = mx_strnew(j - i + 1);
    dst = mx_strncpy(dst, &(str[i]), j - i + 1);
    return dst;
}
