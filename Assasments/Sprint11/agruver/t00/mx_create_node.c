#include "list.h"

t_list *mx_create_node(void *data) {
    t_list *temp;

//    if (NULL == data)
//        return NULL;
    temp = (t_list *)malloc(sizeof(t_list));
    if (NULL == temp)
        return NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


int main() {
//    char *arr = NULL;

    t_list *new_list = mx_create_node(NULL);

//    new_list->data = "ASDASDAS";

    printf("%s", new_list->data);

}
