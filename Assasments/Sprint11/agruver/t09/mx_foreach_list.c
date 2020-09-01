#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) {
    t_list *p = list;

    if (NULL == list || NULL == f)
        return;
    while (NULL != p->next) {
        f(p);
        p = p->next;
    }
}
