#include "list.h"

void mx_mode_add(char **argv, t_list **plist) {
    t_track *track = (t_track *)malloc(sizeof(t_track));

    if (NULL == track)
        mx_report_error();
    track->artist = mx_strdup(argv[3]);
    track->name = mx_strdup(argv[4]);
    mx_push_back(plist, (void *)track);
    mx_print_plist_to_file(argv[1], *plist);
}

void mx_mode_remove(char **argv, t_list **plist) {
    char *str = argv[3];
    int index = mx_atoi(str);

    for (int i = 0; i < mx_strlen(str); ++i)
        if (!mx_isdigit(str[i]))
            mx_report_error();
    if (index < 0 || index >= mx_list_size(*plist))
        mx_report_error();
    mx_pop_index(plist, index);
    mx_print_plist_to_file(argv[1], *plist);
}

static bool cmp_artist(void *a, void *b) {
    t_track *ta = (t_track *)a;
    t_track *tb = (t_track *)b;
    char *sa = mx_strdup(ta->artist);
    char *sb = mx_strdup(tb->artist);
    bool result = false;

    mx_toupper_str(&sa);
    mx_toupper_str(&sb);
    result = mx_strcmp(sa, sb) > 0;
    free(sa);
    free(sb);
    return result;
}

static bool cmp_name(void *a, void *b) {
    t_track *ta = (t_track *)a;
    t_track *tb = (t_track *)b;
    char *sa = mx_strdup(ta->name);
    char *sb = mx_strdup(tb->name);
    bool result = false;

    mx_toupper_str(&sa);
    mx_toupper_str(&sb);
    result = mx_strcmp(sa, sb) > 0;
    free(sa);
    free(sb);
    return result;
}

void mx_mode_sort(char **argv, t_list **plist) {
    char *str = argv[3];

    if (mx_strcmp(str, "artist") == 0)
        *plist = mx_sort_list(*plist, &cmp_artist);
    else if (mx_strcmp(str, "name") == 0)
        *plist = mx_sort_list(*plist, &cmp_name);
    else
        mx_report_error();
    mx_print_plist_to_file(argv[1], *plist);
}
