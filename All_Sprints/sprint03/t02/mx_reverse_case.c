//#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_isupper(int c);
bool mx_islower(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
    int count = 0;

    while(s[count]) {
        if (mx_isupper(s[count]))
            s[count] = mx_tolower(s[count]);
        else 
            s[count] = mx_toupper(s[count]);
        count++;
    }
}
/*
int main() {
    char str[] = "HeLLo Neo";
    mx_reverse_case(str);
    printf("%s", str);
    return 0;
}*/
