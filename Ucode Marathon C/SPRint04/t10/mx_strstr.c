//#include <stdio.h>
//#include <string.h>

int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2) {
    int len2 = mx_strlen(s2);
    int ptr = 0;
    
    while (*s1 != 0) {
        if (mx_strncmp(s1, s2, len2) == 0)
            return mx_strchr(s1, ptr);
        s1++;
        ptr = *s1;
    }
    return 0;
}
/*
 *int main() {
 *   const char *str1 = "-0123456789";
 *   const char *str2 = NULL;
 *   char *str3;
 *   char *str4;
 *   
 *   str3 = strstr(str1, str2);
 *   printf("%s\n", str3);
 *   str4 = mx_strstr(str1, str2);
 *   printf("%s\n", str4);
 *}
 */
