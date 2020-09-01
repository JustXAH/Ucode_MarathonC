#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

typedef struct s_track {
    char *artist;
    char *name;
}              t_track;

enum e_mode {
    DEFAULT,
    ADD,
    REMOVE,
    SORT,
    PRINT
};

int mx_list_size(t_list *list);
void mx_push_back(t_list **list, void *data);
void mx_pop_index(t_list **list, int index);
void mx_clear_list(t_list **list);
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b));

bool mx_isdigit(char c);
int mx_strlen(const char *s);
void mx_printint(int num);
void mx_printstr(const char *s);
int mx_atoi(const char *str);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
void mx_toupper_str(char **strp);

char *mx_file_to_str(const char *filename);
void mx_str_to_file(int fd, const char *str);
void mx_check_args(int argc, char **argv);
t_list **mx_parse_file(const char *filename, enum e_mode mode);
void mx_print_plist_to_file(const char *filename, t_list *plist);

enum e_mode mx_get_mode(const char *str);
void mx_report_error(void);
void mx_report_usage(void);
void mx_mode_print(t_list **plist);
void mx_mode_add(char **argv, t_list **plist);
void mx_mode_remove(char **argv, t_list **plist);
void mx_mode_sort(char **argv, t_list **plist);
