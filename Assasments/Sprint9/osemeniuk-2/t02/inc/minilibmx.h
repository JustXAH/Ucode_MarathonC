#pragma once

#include <unistd.h>
#include <stdbool.h>

// Printing
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
// Work with strings
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
// Atoi
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
