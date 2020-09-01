#include <unistd.h>

void mx_printstr(const char *s);
void mx_printchar(char c);
char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[]) {
    char *i = mx_strchr(argv[0], '/');

    while (i) {
        i = mx_strchr(argv[0], '/');
        if (i != NULL)
            argv[0] = i + 1;
   }
    mx_printstr(argv[0]);
    mx_printchar('\n');
    argc = 0;
}
