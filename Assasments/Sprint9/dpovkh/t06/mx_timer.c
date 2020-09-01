#include <time.h>

double mx_timer(void (*f)()) {
    if (clock() < 0)
        return -1;
    double start = clock();
    f();
    double finish = clock();
    return (finish - start) / CLOCKS_PER_SEC;
}

// #include <stdio.h>
// void f(void) {
//   for (int i = 0; i < 100000; i++){}
// }
// double mx_timer(void (*f)());
// int main(void) {
//   printf("%f\n", mx_timer(f));
//   return 0;
// }
