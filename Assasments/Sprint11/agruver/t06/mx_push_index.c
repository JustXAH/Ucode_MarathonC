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

void mx_insert(t_list **list, void *data, int index) {
    t_list *p = *list;
    t_list *q;
    t_list *tmp;
    int n = 0;

    while (NULL != p->next && n < index - 1) {
        ++n;
        p = p->next;
    }
    q = mx_create_node(data);
    if (NULL == q)
        return;
    tmp = p->next;
    p->next = q;
    q->next = tmp;
}

void mx_push_index(t_list **list, void *data, int index) {
    int k;

    if (NULL == list || NULL == *list)
        return;
    k = mx_list_size(*list);

    if (index <= 0)
        mx_push_front(list, data);
    else if (index > k)
        mx_push_back(list, data);
    else
        mx_insert(list, data, index);
}
