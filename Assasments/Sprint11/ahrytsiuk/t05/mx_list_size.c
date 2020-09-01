#include "list.h"

int mx_list_size(t_list *list) {
    int size = 0;;
    t_list *current = list;

    if(NULL == list)
        return 0;
        
    while(current->next != NULL) {
        current = current->next;
        size++;
    }
    return size + 1;
}
