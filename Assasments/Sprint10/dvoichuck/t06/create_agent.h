#ifndef CREATE_AGENT
#define CREATE_AGENT

#include "agent.h"
#include <stlib.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

t_agent *mx_create_agent(char *name, int power, int strength);

#endif
