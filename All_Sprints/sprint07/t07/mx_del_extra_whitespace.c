#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);
void mx_strdel(char **str);

char *mx_del_extra_whitespaces(const char *str) {
    char *str1 = NULL;
    int size = 0;
    char *res = NULL;
    int i = 0;
    int j = 0;

    str1 = mx_strtrim(str);
    size = mx_strlen(str1);
    for (i = 0; str1[i] != '\0'; i++)
        if (mx_isspace(str1[i]) && mx_isspace(str1[i + 1]))
            size--;
    res = mx_strnew(size);
    for (i = 0; str1[i] != '\0'; i++) {
        if (mx_isspace(str1[i]) && mx_isspace(str1[i + 1]))
            i++;
        res[j] = str1[i];
        j++;
    }
    mx_strdel(&str1);
    return res;
}
