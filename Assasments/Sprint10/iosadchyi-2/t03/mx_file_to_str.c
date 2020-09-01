#include "file_to_str.h"
char *mx_file_to_str(const char *filename) {
    char *result = NULL;
    int file = open(filename, O_RDONLY);
    char buf;
    int size = 0;
    int j = 0;

    if (file > 0) {
        while(read(file, &buf, 1) > 0)
            size++;
        close(file);
        file = open(filename, O_RDONLY);
        result = mx_strnew(size);
        while(read(file, &buf, 1) > 0)
            result[j++] = buf;
    }
    close(file);
    return result;
}
