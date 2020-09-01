//#include<stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {

 char *str = (char*)malloc(size);
    if(str == NULL)
        return NULL;
  
    for(int i = 0; i < size; i++) 
        str[i] = '\0';
        str[size] = '\0';
        return str;
      
    


}
/*int main() {

    printf("%s\n", mx_strnew(-1));
    return 0;
}
*/

