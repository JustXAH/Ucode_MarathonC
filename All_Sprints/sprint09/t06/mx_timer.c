#include <time.h>

double mx_timer(void (*f)()) {
    double start;
    double finish;

    if (clock() < 0)
        return -1;
    start = clock();
    f();
    finish = clock();
    if ((finish - start) <= 0)
        return -1;
    return (finish - start) / CLOCKS_PER_SEC;
}
