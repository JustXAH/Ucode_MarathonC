#include "header.h"

static void print_total(int *total) {
    mx_printchar('\t');
    mx_printint(total[0]);
    mx_printchar('\t');
    mx_printint(total[1]);
    mx_printchar('\t');
    mx_printint(total[2]);
    mx_printchar(' ');
    mx_printstr("total");
    mx_printchar('\n');
}

static void print_count(int *count) {
    mx_printchar('\t');
    mx_printint(count[0]);
    mx_printchar('\t');
    mx_printint(count[1]);
    mx_printchar('\t');
    mx_printint(count[2]);
    mx_printchar(' ');
}

int main(int argc, char *argv[]) {
    int count[3] = {0, 0, 0};
    int total[3] = {0, 0, 0};
    char ch;
    int fd;
    char *mass_str = NULL;
    char buffer[1024];

    if (argc == 1) {
        while (read(0, &buffer, sizeof(buffer))) {
            mass_str = mx_strjoin(buffer, mass_str);
            count[0]++;
            for (int k = 0; mass_str[k] != '\0'; k++)
                if (mx_isspace(mass_str[k]))
                    mass_str[k] = ' ';
            count[1] = mx_count_words(mass_str, ' ');
        }
        count[2] = mx_strlen(mass_str);
        print_count(count);
        mx_printchar('\n');
    }
    for (int i = 1; i < argc; i++) {
        count[0] = 0;
        count[1] = 0;
        count[2] = 0;
        fd = open(argv[i], O_RDONLY | O_DIRECTORY);
        if (fd > 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[1]);
            mx_printerr(" read: Is a directory");
            close(fd);
            continue;
        }
        fd = open(argv[i], O_RDONLY);
        if (fd == -1) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[1]);
            mx_printerr(": open: No such file or directory");
        }
        while (read(fd, &ch, 1)) {
            count[2]++;
            if (ch == '\n')
                count[0]++;
        }
        mass_str = mx_file_to_str(argv[i]);
        for (int j = 0; mass_str[j] != '\0'; j++) {
            if (mx_isspace(mass_str[j]))
                mass_str[j] = ' ';
        }
        count[1] = mx_count_words(mass_str, ' ');
        print_count(count);
        mx_printstr(argv[i]);
        mx_printchar('\n');
        total[0] += count[0];
        total[1] += count[1];
        total[2] += count[2];
        close(fd);
    }
    if (argc > 2)
        print_total(total);
    exit(0);
}
