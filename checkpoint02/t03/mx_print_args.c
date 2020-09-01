#include <unistd.h>

int my_strlen(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

void my_printstr(const char *s) {
    write(1, s, my_strlen(s));
}

void my_printchar(char ch) {
    write (1, &ch, 1);
}


int main (int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        my_printstr(argv[i]);
        my_printchar('\n');
    }
}
