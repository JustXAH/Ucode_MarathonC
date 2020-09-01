int mx_factorial_iter(int n) {
    int sum = 1;
    int i = n;

    if (n == 1 || n == 0)
        return 1;
    else if (n < 0 || n > 12)
        return 0;
    for ( ; i > 0; i--) {
        sum = sum * i;
    }
    return sum;
}
