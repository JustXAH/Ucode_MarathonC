void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

static void negative(unsigned n) {
    if (n > 1) {
        negative(n / 2);
    }
    mx_printint(n % 2);
}

static void digits(int num) {
    int len = 0;

    if (num == 0)
        len = 1;
    else if (num > 0) {
        while (num > 0) {
            num = num / 2;
            len++;
        }
    }
    for (int j = 0; j < 32 - len; j++)
        mx_printint(0);
}

int main(int argc, char *argv[]) {
    int num;

    for (int i = 1; i < argc; i++) {
        num = mx_atoi(argv[i]);
        if (num >= 0)
            digits(num);
        negative(num);
        mx_printchar('\n');
    }
}
