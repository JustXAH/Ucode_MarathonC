//#include <stdio.h>

int mx_strlen(const char *s) {
  unsigned  int counter = 0; 
   while(*s != '\0' ) {
        s++;
        counter++;
}
   return counter;
}

/*int main() {
    char string[] = "Programming";
    
    printf("%d", mx_strlen(string));
}
*/
