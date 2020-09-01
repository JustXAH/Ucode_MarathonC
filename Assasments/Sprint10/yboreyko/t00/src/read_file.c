#include "read_file.h"

int main (int argc, char *argv[]) { 
      char buffer[1]; 
      int length; 
      int fd;
      int i = 1;

      if (argc != 2 ) { 
            char *error = "usage: ./read_file [file_path]\n"; 
            while (*error != '\0') {
                  write (2, error, 1);
                  error++;
            }
      }
      if (argc == 2) {
            if ( (fd = open (argv[i], O_RDONLY) ) < 0 ) { 
                  char *error = "error\n"; 
                  while (*error != '\0') {
                      write (2, error, 1);
                      error++;
                  }
      }
      else {
            while ( (length = read (fd, buffer, 1)) > 0 )
            write (1, buffer, length); 
            write (1, "\n", 1);
      }
   
      close (fd); 
      //exit (0); 
      }
}
