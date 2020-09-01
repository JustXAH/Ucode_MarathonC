#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *p;
    t_list *tmp;

    if (NULL == list || NULL == *list)
        return;
    p = *list;
    while (NULL != p) {
        tmp = p->next;
        free(p);
        p = tmp;
    }
    *list = NULL;
}
