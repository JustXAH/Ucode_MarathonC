#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *tmp;
    
    if (NULL == list || NULL == *list || NULL == data)
        return;
    tmp = mx_create_node(data);
    if (NULL == tmp)
        return;
    tmp->next = *list;
    *list = tmp;
}
