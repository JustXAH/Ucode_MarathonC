#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr) {
    int i = 0;

    if (arr != NULL) {
        while (arr[i]) {
            mx_strdel(arr[i]);
            i++;
        }
        free(*arr);
        *arr = NULL;
    }
}
