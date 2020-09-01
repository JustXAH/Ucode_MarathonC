#include "file_to_str.h"

char *mx_strnew(const int size) {
     if (size <= 0) {
        return NULL;
     }
    char *buf = (char*) malloc(size + 1);
    for (int i = 0; i < size; i++) {
        buf[i] = '\0';
    }
    buf[size] = '\0';
    return buf;
}
