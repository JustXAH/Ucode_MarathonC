#include "list.h"

void mx_push_back(t_list **list, void *data) {
    t_list *tmp;

    if (NULL == list)
        return;

    tmp = mx_create_node(data);

    if (NULL == tmp)
        return;
        
    if (NULL == *list)
        *list = tmp;
    else {
        t_list *p = *list;
        while (NULL != p->next)
            p = p->next;
        p->next = tmp;
    }
}

#include "list.h"

int main() {
    t_list *head = NULL;
    mx_push_back(&head, NULL);
    mx_push_back(&head, "text0");
/*      по идее,
        head->data == "text0"
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
