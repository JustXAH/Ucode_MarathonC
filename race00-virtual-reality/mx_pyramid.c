void mx_printchar(char c);

static void mx_cheops(int n, int x_curr) {
    for (int y = 0; y < n; y++) {
        for (int x = 0; x <= x_curr; x++) {
            if (y >= n / 2 && y < n && x == x_curr)
                mx_printchar('|');
            else if (y >= 0 && y <= n && x == n - 1 - y)  
                mx_printchar('/');
            else if ((y >= 0 && y < n / 2 && x == x_curr) || (x == n - 1 + y)) 
                mx_printchar('\\');
            else if (y == n - 1 && x > 0 && x < 2 * n - 3 + 1)
                mx_printchar('_');
            else 
                mx_printchar(' ');
        }
        if (y < n / 2)
        x_curr += 2;
            if (x_curr > n * 2 - 1)
                x_curr = n * 2 - 1;
        mx_printchar('\n');
    }
}

void mx_pyramid(int n) {
    int x_curr = n;

    if (n <= 1 || n % 2 == 1)
        return;
    mx_cheops(n, x_curr);
}

int main() {
    mx_pyramid(6);
}
