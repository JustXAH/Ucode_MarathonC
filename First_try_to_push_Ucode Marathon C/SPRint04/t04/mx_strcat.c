//#include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int i = 0;
    int len = mx_strlen(s1);

    for (; s2[i] != '\0'; i++, len++) 
        s1[len] = s2[i];
    s1[len] = '\0';
    return s1;
}
/*
int main() {
    char str1[80] = "Wake up Neo!";
    const char str2[30] = " Today is a new day!";
    printf("%s", mx_strcat(str1, str2));
}
*/
