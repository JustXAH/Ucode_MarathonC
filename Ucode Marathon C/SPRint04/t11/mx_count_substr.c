//#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int subs = 0;
    const char *buffer = str;

    if (mx_strlen(str) == 0 || mx_strlen(sub) == 0)
        return 0;
    while ((buffer = mx_strstr(buffer, sub)) != 0) {
        buffer++;
        subs++;
    }
    return subs;
}

// int main() {
//     const char *string = "";
//     const char *subb = "y";
//     printf("%d", mx_count_substr(string, subb));
// }
