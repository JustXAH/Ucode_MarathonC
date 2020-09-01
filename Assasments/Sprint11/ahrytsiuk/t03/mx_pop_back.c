#include "list.h"

void mx_pop_back(t_list **list) {
    t_list *front = *list;
    t_list *current = *list;

    if(NULL == *list)
        return;
        
    if (front->next == NULL) {
        free(front);
        return;
    }
    
    while(current->next->next != NULL){
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

#include "list.h"

int main() {
//    char *str = NULL;
//    char str1[] = "STR1";
//    char str2[] = "STR2";
//    char str3[] = "STR3";

    t_list *new_list = NULL;
//    mx_push_back(&new_list, str);
//    mx_push_back(&new_list, str1);
//    mx_push_back(&new_list, str2);
//    mx_push_back(&new_list, str3);
    mx_pop_back(&new_list);


    while (new_list) {
        char *buf = (char *)new_list->data;
        printf("STR_s = %s\n", buf);
        new_list = new_list->next;
    }
//    system("leaks -q a.out");
}
