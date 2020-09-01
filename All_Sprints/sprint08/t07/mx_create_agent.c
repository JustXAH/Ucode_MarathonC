#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *agent = NULL;

    if (!name)
        return agent;
    agent = malloc(sizeof(t_agent));
    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;
    return agent;
}
