#include "mx_cat.h"

static int mx_strlen(const char *s) {
      int c = 0;
      while (*s) {
            c++;
            s++;
      }
      return c;
}

int main (int argc, char *argv[]) { 
      char buffer[1]; 
      char c;
      int fd[argc];
      char *part_1 = "mx_cat: ";
      char *part_3 = ": No such file or directory\n";

      if(argc == 1) {
            while (read(0, &c, 1))
                  write(1, &c, 1);
      }  
      
      for (int i = 1; i < argc; i++) {
           if ((fd[i] = open (argv[i], O_RDONLY)) < 0) { 
                  write (2, part_1, 8);
                  write (2, argv[i], mx_strlen(argv[i]));
                  write (2, part_3, mx_strlen(part_3));
               
            }
            if ((fd[i] = open (argv[i], O_RDONLY)) > 0){
                  while (read (fd[i], buffer, 1) > 0 )
                        write (1, buffer, 1); 
            }
      }
      for(int i = 1; i < argc; i++) 
            close(fd[i]);  
      exit (0); 
}
