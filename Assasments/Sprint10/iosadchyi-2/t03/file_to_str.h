#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strnew(const char size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_file_to_str(const char *filename);
char *mx_strjoin(char const *s1, char const *s2);
