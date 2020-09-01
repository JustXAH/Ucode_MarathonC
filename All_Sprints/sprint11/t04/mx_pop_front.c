#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *next_list = NULL;

    if (*list == NULL)
        return;
    else {
        next_list = (*list)->next;
        free(*list);
        *list = next_list;
    }
}
