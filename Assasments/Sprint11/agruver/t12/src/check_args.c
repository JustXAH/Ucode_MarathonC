#include "list.h"

void mx_report_usage(void) {
    const char usage[] = "usage: ./playlist [file] [command] [args]\n";

    write(2, usage, mx_strlen(usage));
    exit(1);
}

void mx_report_error(void) {
    const char error[] = "ERROR\n";

    write(2, error, mx_strlen(error));
    exit(1);
}

static void check_file(const char *filename) {
    int fd = open(filename, O_RDONLY);

    if (-1 == fd)
        mx_report_error();
    close(fd);
}

void mx_check_args(int argc, char **argv) {
    if (argc == 1)
        mx_report_usage();
    if (argc < 3 || argc > 5)
        mx_report_error();
    if (argc == 3 && mx_strcmp(argv[2], "print") == 0)
        check_file(argv[1]);
    else if (argc == 4 && (mx_strcmp(argv[2], "remove") == 0
             || mx_strcmp(argv[2], "sort") == 0))
        check_file(argv[1]);
    else if (!(argc == 5 && mx_strcmp(argv[2], "add") == 0))
        mx_report_error();
}
