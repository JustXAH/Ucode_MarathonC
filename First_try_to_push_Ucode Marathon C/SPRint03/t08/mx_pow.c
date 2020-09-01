// #include <stdio.h>

double mx_pow(double n, unsigned int pow) {
    double rp_n = 1;

        if (pow != 0) {
            while (pow != 0) {
                rp_n *= n;
                pow--;
            }
        }
        return rp_n;
}

// int main() {
//     double n = 3;
//     unsigned int pow = 3;
//     printf("%f", mx_pow(n, pow));
// }
