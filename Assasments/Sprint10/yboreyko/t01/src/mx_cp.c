#include "mx_cp.h"

int main (int argc, char *argv[]) { 
      char buffer[1]; 
      int length; 
      int fd;
      int dst;
      int i = 0;

      if (argc != 3 ) { 
            char *error = "usage:  ./mx_cp [source_file] [destination_file]\n"; 
            while (*error != '\0') {
                  write (2, error, 1);
                  error++;
            }
      }
      if (argc == 3) {
            if ( (fd = open (argv[1], O_RDONLY) ) < 0 ) { 
                  char *error[] = {"mx_cp: ", argv[1], ": No such file or directory\n"}; 
                  for (; i < 3; i++ ) 
                        for (int j = 0; error[i][j] != '\0'; j++)
                              write (2, &error[i][j], 1);     
                  exit(1);
            }
            else {
                  dst = open (argv[2], O_RDWR | O_CREAT | O_EXCL, 0644);
                  while ( (length = read (fd, buffer, 1)) > 0 )
                        write (dst, buffer, length); 
                  write (dst, "\n", 1);
            }
      close (fd); 
      close (dst);
      exit (0); 
      }
}
