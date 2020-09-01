#include "list.h"

t_list *mx_create_node(void *data) {
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

void mx_clear_list(t_list **list) {
    t_list *temp = *list;
    t_list *p;

    if(NULL == list || NULL == *list)
        return;

    while(temp->next != NULL) {
        p = temp->next;
        free(temp);
        temp = p;
    }
    *list = NULL;
}


int main() {
    t_list *head = mx_create_node(NULL);
//    t_list *first = mx_create_node("text0");
//    t_list *second = mx_create_node("text1");
//    t_list *third = mx_create_node("text2");
//    t_list *fourth = mx_create_node("text3");
//    head->next = first;
//    first->next = second;
//    second->next = third;
//    third->next = fourth;

//  t_list *it = head;
    mx_clear_list(&head);

    while(head) {
        printf("%s\n", head->data);
        head = head->next;
    }
    system("leaks -q a.out");
}
