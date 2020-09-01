#include "list.h"

t_list *mx_create_node(void *data) {
   t_list *node;

   if(data == NULL)
      return NULL;

   node = (t_list *)malloc(sizeof(t_list));

   if(node == NULL)
      return NULL;

   node->data = data;
   node->next = NULL;

   return node;
}

int main() {
    t_list *new_list;
    new_list->data = NULL;

    mx_create_node(new_list->data);
}