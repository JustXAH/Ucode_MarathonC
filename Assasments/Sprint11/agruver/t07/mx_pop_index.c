#include "list.h"

int mx_list_size(t_list *list) {
    int k = 1;
    t_list *p = list;

    if (NULL == list)
        return 0;
    while (NULL != p && NULL != p->next) {
        k++;
        p = p->next;
    }
    return k;
}

void mx_erase(t_list **list, int index) {
    t_list *p = *list;
    t_list *tmp;
    int n = 0;

    while (NULL != p->next && n < index - 1) {
        ++n;
        p = p->next;
    }
    if (NULL == p->next || NULL == p->next->next)
        return;
    tmp = p->next->next;
    free(p->next);
    p->next = tmp;
}

void mx_pop_index(t_list **list, int index) {
    int k;

    if (NULL == list || NULL == *list)
        return;
    k = mx_list_size(*list);
    if (index <= 0)
        mx_pop_front(list);
    else if (index >= k - 1)
        mx_pop_back(list);
    else
        mx_erase(list, index);
}
