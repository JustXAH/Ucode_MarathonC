#include "list.h"

static t_list *mx_create_node(void *data) {
    t_list *temp;

    if (NULL == data)
        return NULL;
    temp = (t_list *)malloc(sizeof(t_list));
    if (NULL == temp)
        return NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void mx_push_back(t_list **list, void *data) {
    t_list *tmp;

    if (NULL == list)
        return;
    tmp = mx_create_node(data);
    if (NULL == tmp)
        return;
    if (NULL == *list)
        *list = tmp;
    else {
        t_list *p = *list;

        while (NULL != p->next)
            p = p->next;
        p->next = tmp;
    }
}
