#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *node;
    
    if(data == NULL)
        return;

    node = mx_create_node(data);
    
    if(node == NULL || NULL == list || NULL == *list) 
        return;

    node->next = *list; 
    *list = node;
}

int main() {
    t_list *head = mx_create_node("push");

    mx_push_front(&head, "NULL");
    mx_push_front(&head, "text1");
/*  head->data == "text0"
    head->next == node1
    node1->data == "text1"
    node1->next == NULL
*/
    t_list *it = head;
    while(it) {
        printf("%s\n", it->data);
        it = it->next;
    }
}
