#include <unistd.h>

void mx_printerr(const char *s) {
    int len = 0;

    while (s[len])
        len++;

    write(2, s, len);
}
