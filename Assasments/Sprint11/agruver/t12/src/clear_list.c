#include "list.h"

int mx_list_size(t_list *list) {
    int k = 1;
    t_list *p = list;

    if (NULL == list)
        return 0;
    while (NULL != p->next) {
        ++k;
        p = p->next;
    }
    return k;
}

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
