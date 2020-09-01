#include "list.h"

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
 
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (const unsigned char)s1[i] - (const unsigned char)s2[i];
}

int mx_strlen(const char *s) {
    int len = 0;

    while (s && s[len])
        ++len;
    return len;
}

char mx_toupper(char c) {
    bool is_lower = (c >= 'a' && c <= 'z');

    return is_lower ? c + 'A' - 'a' : c;
}

void mx_toupper_str(char **strp) {
    int n = mx_strlen(*strp);

    for (int i = 0; i < n; ++i)
        (*strp)[i] = mx_toupper((*strp)[i]);
}
