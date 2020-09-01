#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
void mx_strdel(char **str);

char *mx_concat_words(char **words) {
    char *str1 = NULL;
    char *str2 = NULL;
    char *tmp = NULL;

    for (int i = 0; words[i] != NULL; i++) {
        tmp = mx_strdup(words[i]);
        str2 = mx_strjoin(str1, tmp);
        mx_strdel(&str1);
        if (words[i + 1])
            str1 = mx_strjoin(str2, " ");
        else
            str1 = mx_strdup(str2);
        mx_strdel(&str2);
        mx_strdel(&tmp);
    }
    return str1;
}
