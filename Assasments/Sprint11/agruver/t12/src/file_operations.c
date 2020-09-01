#include "list.h"

static int file_length(const char *filename) {
    int fd = open(filename, O_RDONLY);
    int len = 0;
    char buffer = 0;

    if (fd < 0)
        return -1;
    while (read(fd, &buffer, 1))
        ++len;
    close(fd);
    return len;
}

char *mx_file_to_str(const char *filename) {
    char *str = NULL;
    int length = file_length(filename);
    int fd = open(filename, O_RDONLY);

    if (fd == -1)
        return NULL;
    str = mx_strnew(length);
    if (str == NULL) {
        close(fd);
        return NULL;
    }
    if (read(fd, str, length) != length) {
        free(str);
        str = NULL;
    }
    close(fd);
    return str;
}

void mx_str_to_file(int fd, const char *str) {
    write(fd, str, mx_strlen(str));
}
