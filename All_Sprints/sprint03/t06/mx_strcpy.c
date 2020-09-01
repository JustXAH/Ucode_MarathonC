//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}
/*
int main() {
    char src[6] = "Hello";
    char dst [8] = "";
    printf("%s", mx_strcpy(dst,src));
}*/
