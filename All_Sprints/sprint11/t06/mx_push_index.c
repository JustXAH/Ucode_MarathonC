#include "list.h"

static int mx_list_size(t_list *list) {
    t_list *tmp = NULL;
    int i = 0;

    if (list == NULL)
        return i;
    else
        tmp = list;
        while (tmp != NULL) {
            i++;
            tmp = tmp->next;
        }
    return i;
}

void mx_push_index(t_list **list, void *data, int index) {
    t_list *head = *list;
    int size = mx_list_size(*list);
    t_list *insert = mx_create_node(data);

    if (index <= 0)
        mx_push_front(list, data);
    else if (index > size)
        mx_push_back(list, data);
    else
        for (int i = 0; head != NULL; i++) {
            if (i == index - 1) {
                insert->next = head->next;                
                head->next = insert;
            }
            head = head->next;
        } 
}
