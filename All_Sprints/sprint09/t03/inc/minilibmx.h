#pragma once

#include <stdbool.h>
#include <unistd.h>

// Printing
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);

// Working with strings
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

// Atoi - converts the string argument str to an integer (type int)
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
