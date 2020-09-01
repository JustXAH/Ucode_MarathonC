#pragma once
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *atr);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
