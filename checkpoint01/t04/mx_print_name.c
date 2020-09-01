#include <stdlib.h>
#include <unistd.h>

static int str_length(char *arr) {
    int len = 0;

    while (arr[len])
        len++;
    return len;
}

static void print_char (char c) {
    write(1, &c, 1);
}

static void print_str (char *arr, int size) {
    for (int i = 0; i < size; i++)
        print_char(arr[i]);
}

static void print_int (int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        print_char('-');
        n *= -1;
    }
    if (n > 9) {
        print_int(n / 10);
    }
    print_char((n % 10) + 48);
}

int main(int args, char *argv[]) {
    print_str(argv[0], str_length(argv[0]));
    print_char('\n');
    print_int(args);
    print_char('\n');
}
