
int mx_strlen(const char *s) {
    unsigned int counter = 0;
    while (*s != '\0') {
        s++;
        counter++;
    }
    return counter;
}

