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


void mx_pop_index(t_list **list, int index) {
    t_list *head = *list;
    int size = mx_list_size(*list);

    if (index <= 0)
        mx_pop_front(list);
    else if (index > size - 1)
        mx_pop_back(list);
    else
        for (int i = 0; head != NULL; i++) {
            if (i == index - 1) {
                free(head->next);
                head->next = head->next->next;
            }
            head = head->next;
        } 
}
