#include <unistd.h>

void my_printchar(char ch) {
    write (1, &ch, 1);
}

void mx_printint(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        my_printchar('-');
        n *= -1;
    }
    if (n > 9) {
        mx_printint(n / 10);
    }
    my_printchar((n % 10) + 48);
}
