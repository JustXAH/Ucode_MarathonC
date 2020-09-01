#include "list.h"

static void read_artist(char **strp, t_track **track) {
    char *str = *strp;
    int n = 0;

    while (str[n] && str[n] != ',')
        ++n;
    (*track)->artist = mx_strnew(n);
    if (NULL == (*track)->artist)
        mx_report_error();
    (*track)->artist = mx_strncpy((*track)->artist, str, n);
    *strp += n + 1;
    if (mx_strlen(*strp) == 0)
        mx_report_error();
}

static void read_name(char **strp, t_track **track) {
    char *str = *strp;
    int n = 0;

    while (str[n] != '\0' && str[n] != '\n')
        ++n;
    (*track)->name = mx_strnew(n);
    if (NULL == (*track)->name)
        mx_report_error();
    (*track)->name = mx_strncpy((*track)->name, str, n);
    *strp += n + 1;
}

static void next_part(char **strp, t_track **track) {
    *track = (t_track *)malloc(sizeof(t_track));
    if (NULL == track)
        mx_report_error();
    read_artist(strp, track);
    read_name(strp, track);
}

t_list **mx_parse_file(const char *filename, enum e_mode mode) {
    t_list **plist;
    t_track *track;
    char *str = mx_file_to_str(filename);
    char *str_copy = str;

    if (NULL == str && mode != ADD)
        mx_report_error();
    plist = (t_list **)malloc(sizeof(t_list *));
    if (NULL == plist) {
        free(str);
        free(plist);
        mx_report_error();
    }
    *plist = NULL;
    while (mx_strlen(str) > 0) {
        next_part(&str, &track);
        mx_push_back(plist, (void *)track);
    }
    free(str_copy);
    return plist;
}
