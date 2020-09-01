#include "list.h"

void mx_del_from_beginning(t_list **list, void *del_data,
                           bool (*cmp)(void *a, void *b)) {
    t_list *p = *list;
    t_list *q;

    while (NULL != p && cmp(p->data, del_data)) {
        q = p;
        p = p->next;
        free(q);
        *list = p;
    }
}

void mx_del_node_if(t_list **list, void *del_data,
                    bool (*cmp)(void *a, void *b)) {
    t_list *p;
    t_list *q;
    t_list *tmp;

    if (NULL == list || NULL == *list || NULL == cmp)
        return;
    mx_del_from_beginning(list, del_data, cmp);
    p = *list;
    while (NULL != p && NULL != p->next) {
        q = p->next;
        if (cmp(q->data, del_data)) {
            tmp = q->next;
            free(q);
            p->next = tmp;
        }
        p = p->next;
    }
}
