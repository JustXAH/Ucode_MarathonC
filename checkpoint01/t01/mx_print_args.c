#include <stdlib.h>
#include <unistd.h>

static int str_length(char *arr) {
    int len = 0;

    while (arr[len])
        len++;
    return len;
}

static void print_str (char *arr, int size) {
    for (int i = 0; i < size; i++)
        write(1, &arr[i], 1);
}

int main(int args, char *argv[]) {
    char c = '\n';

    for (int j = 1; j < args; j++) {
        print_str(argv[j], (str_length(argv[j])));
        write(1, &c, 1);
    }
}
