#include "list.h"

static void mx_pop_front(t_list **list) {
    t_list *tmp = NULL;

    if (*list != NULL && list != NULL) {
        tmp = (*list)->next;
        free(*list);
        *list = tmp;
    }
}

void mx_clear_list(t_list **list) {
	while (*list)
	    mx_pop_front(list);
}
