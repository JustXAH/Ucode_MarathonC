#include <stdint.h>

void mx_printchar(char c);

static void mx_upper(int n, int x_curr, int y, int max_x) {
    for (int x = 0; x <= x_curr; x++) {
        if ((y == 0 && x == max_x) 
             || (y == 0 && x == n / 2 + 1))
            mx_printchar('+');
        else if ((y == n / 2 + 1 && x == 0 ) 
                  || (y == n / 2 + 1 && x == n * 2 + 1))
            mx_printchar('+');
        else if (y > 0 && y <= n / 2 && ((x == n / 2 + 1 - y)
                 || (x == max_x - y)))
            mx_printchar('/');
        else if ((y == 0 && x > n / 2 + 1 && x < max_x)
                  || (y == n / 2 + 1 && x > 0 && x < max_x - n / 2 - 1))
            mx_printchar('-');
        else if (y > 0 && y < n / 2 + 2 && x == max_x)
            mx_printchar('|');
        else if (y < n / 2 + 2)
            mx_printchar(' '); 
    }
    mx_printchar('\n');
}

static void mx_mid_and_lower(int n, int x_curr, int y, int max_x) {
    int max_y = n + 3 + n / 2 - 1;

    for (int x = 0; x <= x_curr; x++) {
        if ((y == max_y - 1 && x == 0) 
             || (y == max_y - 1 && x == n * 2 + 1)
             || (y == n + 2 - 2 && x == max_x))
            mx_printchar('+');
        else if ((y > n / 2 + 1 && y < max_y - 1 && x == 0) 
                  || (y > n / 2 && y < n + 2 - 2 && x == max_x)
                  || (y > n / 2 && y < max_y && x == 0)
                  || (y > n / 2 && y < max_y && x == max_x - n / 2 - 1))
            mx_printchar('|');
        else if (y >= n + 1 && y < n + 3 + n / 2 - 2 && x == x_curr)
            mx_printchar('/');
        else if (y == max_y - 1 && x > 0 && x < x_curr)
            mx_printchar('-');
        else if (y >= n / 2 + 1 && y < max_y)
            mx_printchar(' '); 
    }
}

void mx_cube(int n) {
    int max_x = n / 2 + 2 + n * 2;
    int y = 0;
    int x_curr = max_x;

    if (n <= 1)
        return;
    for ( ; y < (n + 3 + n / 2); y++) {
        if (y >= n + 1)
            x_curr--;
        mx_upper(n, x_curr, y, max_x);
        mx_mid_and_lower(n, x_curr, y, max_x);
    }
}

int main() {
    mx_cube(12);
}
