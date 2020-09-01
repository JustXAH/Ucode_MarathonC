//#include <stdio.h>

void mx_deref_pointer(char ******str) {
    *****str = "Follow the white rabbit!";
}

/*
int main() {   
    char *str1 = NULL;
    char **str2 = &str1;
    char ***str3 = &str2;
    char ****str4 = &str3;
    char *****str5 = &str4;
    char ******str6 = &str5;

    mx_deref_pointer(str6);
    printf("%s\n", str1);
    return 0;
}
*/
