//#include <stdio.h>

void mx_ref_pointer(int i, int ******ptr) {
    ******ptr = i;
}
/*
int main() {
    int i = 0;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr = &ptr5;

    mx_ref_pointer(7324, &ptr5);
    printf("%d", i);
    return 0;
}*/
