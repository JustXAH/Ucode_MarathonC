#include "list.h"

void mx_foreach_list(t_list *list, void(*f)(t_list *node)) {
    t_list *current = list;

    if(NULL == list || NULL == f)
        return;
    
    for(t_list *i = current; i->next != NULL; i = i->next) {
        f(i);
    }
}

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
void prit_list(t_list *head) {
    while (head) {
        printf("%s\n", head->data);
        head = head->next;
    }
}
int main() {
    t_list *head = mx_create_node("push");
    t_list *first = mx_create_node("text0");
    t_list *second = mx_create_node("text1");
    t_list *third = mx_create_node("text2");
    t_list *fourth = mx_create_node("text3");
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

//  t_list *it = head;
    prit_list(head);
}