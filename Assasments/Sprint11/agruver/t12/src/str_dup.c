#include "list.h"

char *mx_strnew(const int size) {
    char *str;
    if (size < 0)
        return NULL;

    str = (char *)malloc((size + 1) * sizeof(char));
    if (NULL == str)
        return NULL;

    for (int i = 0; i <= size; ++i)
        str[i] = '\0';
    return str;
}

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    
    while (src && src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

char *mx_strncpy(char *dst, const char *src, int len) {
    int i;

    for (i = 0; i < len && src && src[i]; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

char *mx_strdup(const char *str) {
    char *dup = mx_strnew(mx_strlen(str));
    
    return dup ? mx_strcpy(dup, str) : NULL;
}
