//#include<stdio.h>
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *smp;
    smp = mx_strnew(mx_strlen(str));
    mx_strcpy(smp, str);
    return smp;
}
/*int main() {
    const char str[] = "follow";
    printf("%s\n", mx_strdup(str));
return 0;    
}
*/
