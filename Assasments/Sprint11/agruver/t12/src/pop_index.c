#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *p;

    if (NULL == list || NULL == *list)
        return;    
    p = *list;
    if (NULL == p->next) {
        free(p);
        *list = NULL;
    }
    else {
        p = p->next;
        free(*list);
        *list = p;
    }
}

void mx_pop_back(t_list **list) {
    t_list *p;
    
    if (NULL == list || NULL == *list)
        return;    
    p = *list;
    if (NULL == p->next) {
        free(p);
        *list = NULL;
    }
    else {
        while (NULL != p->next->next)
            p = p->next;
        free(p->next);
        p->next = NULL;
    }
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
    else if (index >= k -1)
        mx_pop_back(list);
    else
        mx_erase(list, index);
}
