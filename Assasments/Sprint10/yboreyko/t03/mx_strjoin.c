#include "file_to_str.h"

char *mx_strjoin(char const *s1, char const *s2) {
    char *p;
    if (s1 == NULL && s2 == NULL)
        return NULL;
    if (s1 == NULL) {
        p = mx_strdup(s2);
        return p;
    }
    if (s2 == NULL) {
        p = mx_strdup(s1);
        return p;
    }
    char buf[mx_strlen(s1) + mx_strlen(s2)];
    if (mx_strlen(buf) <= 0)
        return NULL;
    p = mx_strdup(buf);
    mx_strcpy(p, s1);
    mx_strcat(p, s2);
    return p;
}
