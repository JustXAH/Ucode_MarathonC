#include <time.h>

double mx_timer(void (*f)()) {
    double end;
    double begin = clock();
    
    f();
    end = clock();
    if(end < 0 || begin < 0) {
        return -1;
    }
    else
        return (end - begin) / CLOCKS_PER_SEC;
}
