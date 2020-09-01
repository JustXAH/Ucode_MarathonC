//#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
   int a = mx_strlen(s1);
   int b = mx_strlen(s2);
   int t = 0;
   for(int i = a; i < a + b; i++) {
   s1[i] = s2[t++]; }
    return s1;
}

/*int main() {
char s1[80] = "Come on";
const char s2[] = ", Neo!";
printf("%s\n", mx_strcat(s1, s2));
return 0;
}
*/
