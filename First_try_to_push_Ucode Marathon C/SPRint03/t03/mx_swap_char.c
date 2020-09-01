//#include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
    char s;

    s = *s1;
    *s1 = *s2;
    *s2 = s;
}

/*int main() {
    char str[] = "ONE";
    printf("%s\n", str);
    mx_swap_char(&str[0], &str[1]);
    printf("%s\n", str);
    mx_swap_char(&str[1], &str[2]);
    printf("%s\n", str);
}*/
