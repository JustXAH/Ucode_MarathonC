#include "head.h"

int main(int argc, char **argv) 
{
    int f = 0;
    int i = 1;
    char buffer;

    while(argc == 1) {
        read(0, &buffer, 1);
        write(1, &buffer, 1 );
    }
    for(; i < argc; i++) {
        if ((f = open (argv[i], O_RDONLY)) == -1) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr("No such file or directory\n");
        } else 
            while (read (f, &buffer,1))
                write(1, &buffer, 1);
            
            
        close(f);
    }
    return 0;
}
