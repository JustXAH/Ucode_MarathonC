#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    char *res = NULL;
    int len = 0;
    char buf[1000];

    int fd = open(filename, O_RDONLY);
    while(read(fd, buf, 1) > 0)
        len++;
    close(fd);

    int pap = open(filename, O_RDONLY);

    while ((read(pap, buf, len)) > 0) {
        res = mx_strjoin(res, buf);
    }
    close (pap);
    return res;
    free(res);
}
