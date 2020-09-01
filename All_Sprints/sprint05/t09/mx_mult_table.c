int mx_atoi(const char *s);
void mx_printchar(char c);
void mx_printint(int n);

int main (int agvc, char *argv[]) {
    if (agvc == 3) {
        int a = mx_atoi(argv[1]);
        int b = mx_atoi(argv[2]);

        if (a >= 1 && b >= 1 && (b - a) < 9 && (a - b) < 9) {
            if (a > b) {
                b = mx_atoi(argv[1]);
                a = mx_atoi(argv[2]);
            }
            for (int i = a; i <= b; i++) {
                for (int j = a; j <= b; j++){
                    mx_printint(i * j);
                    if (j != b)
                        mx_printchar('\t');
                }
                mx_printchar('\n');
            }
        }
    }
    return 0;
}
