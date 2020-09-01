#pragma once

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

void mx_clear_list(t_list **list);
