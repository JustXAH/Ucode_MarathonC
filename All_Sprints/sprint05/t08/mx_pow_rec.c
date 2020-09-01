double mx_pow_rec(double n, unsigned int pow) {
    if (n < 0)
        return 0;
    else if (pow == 0)
        return 1;

    return (n *= mx_pow_rec(n, pow - 1));
}
