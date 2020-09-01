#include "file_to_str.h"

char *mx_strdup(const char *str) {
    if (mx_strlen(str) <= 0)
        return NULL;
    char *buf = mx_strnew(mx_strlen(str));
    mx_strcpy(buf, str);
    return buf;
}
