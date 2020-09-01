#include "list.h"

static void process_input(char **argv, t_list **plist, enum e_mode mode) {
    if (NULL == argv)
        mx_report_error();
    switch (mode) {
        case ADD:
            mx_mode_add(argv, plist);
            break;
        case REMOVE:
            mx_mode_remove(argv, plist);
            break;
        case SORT:
            mx_mode_sort(argv, plist);
            break;
        case PRINT:
            mx_mode_print(plist);
            break;
        default:
            mx_report_error();
            break;
    }
}


int main (int argc, char **argv) {
    t_list **plist;
    enum e_mode mode;

    mx_check_args(argc, argv);
    mode = mx_get_mode(argv[2]);
    plist = mx_parse_file(argv[1], mode);
    process_input(argv, plist, mode);
    mx_clear_list(plist);
    return 0;
}
