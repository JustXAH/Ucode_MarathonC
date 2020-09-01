//#include <stdio.h>

void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
   	int i = 0;
	int len = mx_strlen(s) - 1;

	if (s == 0)
		return;
		
	while (i < len) {
		mx_swap_char(&s[i], &s[len]);
		i++;
		len--;
	}
}

/*int main() {
    char str[] = "game over";
    printf("%s\n", str);
    mx_str_reverse(str);
    printf("%s\n", str);
}*/
