void mx_str_reverse(char *s) {
    int len = 0;
    int a = 0;
    char s1;

    while (s[len])
        len++;
    len = len - 1;
    
    for (int i = 0; i < len; i++) {
        a = i;
        s1 = s[a];
        s[a] = s[len];
        s[len] = s1;
        len--;
    }
}
