#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H

#include "agent.h"
#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);
t_agent *mx_create_agent(char *name, int power, int strength);

#endif
