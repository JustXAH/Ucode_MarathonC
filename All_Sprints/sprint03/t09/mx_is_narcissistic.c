//#include <stdio.h>
#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

static int lenght_number (int number) {   
    int i;

    for (i = 0; number != 0; i++) 
        number = number / 10;
    return i;
} 

bool mx_is_narcissistic(int num) {
    int n = num;
    int len;
    int sum = 0;
    
    if (num < 0)
        return 0;
    len = lenght_number(num);
    while (num != 0) {
        sum = sum + mx_pow((num % 10), len);
        num = num / 10;
    }
    if (n == sum)
        return 1;    
    return 0;
}   
/*
int main() {
    printf("%d", mx_is_narcissistic(153));
}*/
