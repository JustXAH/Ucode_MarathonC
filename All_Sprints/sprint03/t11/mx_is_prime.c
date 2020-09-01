//#include <stdio.h>
#include <stdbool.h>

bool mx_is_prime(int num) {
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
            if (num % i == 0) 
                return 0;
        return 1;
    }
    else 
        return 0;
}
/*
int main() {
    printf("%d", mx_is_prime(2147483647));
}*/
