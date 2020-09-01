    #include <stdbool.h>

void mx_printint(int n);
void mx_printchar(char c);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            if (mx_atoi(argv[i]) != 0)
                sum += mx_atoi(argv[i]);
        }
        mx_printint(sum);
        mx_printchar('\n');
    }
}
