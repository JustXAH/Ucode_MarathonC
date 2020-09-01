#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *front = *list;
    t_list *second = front->next;

    if(NULL == list || NULL == *list)
        return;
        
    free(front);
    *list = second;
}
