#include "head.h"

int mx_strlen(const char *s);
void mx_printerr(const char *s) {
    int i = 0;
    int n;
    n = mx_strlen(s);
    
    for(; i < n; i++) 
        write(2, &s[i], 1);
    
}

// int main() {
//     char s[] = "ERROR!!!";
//     mx_printerr(s);
// }
