#include "list.h"

enum e_mode mx_get_mode(const char *str) {
    if (mx_strcmp(str, "add") == 0)
        return ADD;
    if (mx_strcmp(str, "remove") == 0)
        return REMOVE;
    if (mx_strcmp(str, "sort") == 0)
        return SORT;
    if (mx_strcmp(str, "print") == 0)
        return PRINT;
    return DEFAULT;
}

void mx_mode_print(t_list **plist) {
    int i = 0;
    t_list *node;
    t_track *track;

    if (NULL == plist || NULL == *plist)
        mx_report_error();
    node = *plist;
    while (node) {
        track = (t_track *)(node->data);
        mx_printint(i);
        mx_printstr(". ");
        mx_printstr(track->artist);
        mx_printstr(" - ");
        mx_printstr(track->name);
        mx_printstr("\n");
        ++i;
        node = node->next;
    }
}

static void print_track_to_file(int fd, t_track *track) {
    mx_str_to_file(fd, track->artist);
    mx_str_to_file(fd, ",");
    mx_str_to_file(fd, track->name);
    mx_str_to_file(fd, "\n");
}

void mx_print_plist_to_file(const char *filename, t_list *plist) {
    int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC,
                  S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    t_list *node = plist;

    if (fd == -1)
        mx_report_error();
    while (node) {
        t_track *track = (t_track *)(node->data);

        print_track_to_file(fd, track);
        node = node->next;
    }
    close(fd);
}
