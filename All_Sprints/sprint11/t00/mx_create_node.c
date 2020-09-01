#include "list.h"

t_list *mx_create_node(void *data) {
    t_list *tmp = (t_list*) malloc(sizeof(t_list));

    tmp->data = data;
    tmp->next = NULL;
    return tmp;
}

int main() {
//    char *mass = NULL;
//    int mass2[] = {0, 9, 8};
    t_list *new_list = mx_create_node(NULL);
//    mx_push_front(&new_list, mass2);
//    t_list *list = new_list;
//    while (list) {
//        int *buf = (int *)list->data;
        printf("%s", new_list->data);
//        printf("\n");
//        list = list->next;
//    }
}
