//#include<stdio.h>
#include<stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strjoin(char const *s1, char const *s2) {
    char *nw = NULL;
    if(s1 == NULL && s2 != NULL) {
        nw = mx_strnew(mx_strlen(s2) + 1);
        nw = mx_strcat(nw, s2);
    }
    else if (s2 == NULL && s1 != NULL) {
        nw = mx_strnew(mx_strlen(s1) + 1);
        nw = mx_strcat(nw, s1);
    }
    else if (s2 == NULL && s1 == NULL) {
        return NULL;
    }   
    else {
        nw = mx_strnew(mx_strlen((s1) + 1) + mx_strlen((s2) + 1));
        mx_strcpy(nw, s1);
        mx_strcat(nw, s2);    
    }    
    return nw;
}
// int main() {
//     char str1[] = "this";
//     char str2[] = "dodge ";
//     //void *str3 = NULL;
//     printf("%s\n", mx_strjoin(str2, str1));
//     return 0;
// }

