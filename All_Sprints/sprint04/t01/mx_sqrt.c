//#include <stdio.h>

int mx_sqrt(int x) {
    for (int i = 1; i <= x / i; ++i) {
        if (i * i == x) 
            return i;
    }
    return 0;
}
/*
int main() {

    printf("%d", mx_sqrt(2147395600));
}
*/
