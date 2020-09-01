#include "get_address.h"

char *mx_get_address(void *p) {
    char *temp_add = mx_nbr_to_hex((unsigned long) &p);
    char *address = mx_strnew(mx_strlen(temp_add) + 2);
    char *buffer = NULL;

    address[0] = '0';
    address[1] = 'x';
    buffer = address;
    address += 2;
    address = mx_strcpy(address, temp_add);
    free(temp_add);
    address = buffer;
    free(buffer);
    return address;
}
