#include <unistd.h>

int my_strlen(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

void mx_printstr(const char *s) {
    write(1, s, my_strlen(s));
}