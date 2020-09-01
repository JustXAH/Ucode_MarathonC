//#include <stdio.h>
//#include <string.h>

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

    for (; i < len && src[i] != '\0'; i++) 
        dst[i] = src[i];
    for (; i < len; i++)
        dst[i] = '\0';
    return dst;
}
/*
int main() {
    const char src[11] = "yo neo bro";
    char dst[13];
    printf("%s\n", strncpy(dst, src, 3));
    printf("%s", mx_strncpy(dst, src, 3));
}
*/
