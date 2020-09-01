#include "printerr.h"

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

// int main() {
//     mx_printerr("Nice");
// }
