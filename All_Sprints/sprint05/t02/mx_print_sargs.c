int mx_strcmp(const char *s1, const char *s2);
void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    char *bubble;

    for (int i = 1; i < argc - 1; i++) {
        for (int j = argc - 1; j > i; j--) {
            if ((mx_strcmp(argv[j - 1], argv[j])) > 0) {
                bubble = argv[j - 1];
                argv[j - 1] = argv[j];
                argv[j] = bubble;
            }
        }
    }
    for (int k = 1; k < argc; k++) {
        mx_printstr(argv[k]);
        mx_printchar('\n');
    }
}
