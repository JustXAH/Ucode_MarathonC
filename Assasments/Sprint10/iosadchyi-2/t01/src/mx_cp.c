#include "cp.h"

int main(int argc, char **argv)
{
    int f = -1;
    int m = -1;
    char *ch = NULL;
    if(argc != 3) {
         write(2, "error\n", 6);
    }
    else if((f = open (argv[1], O_RDONLY)) == -1)  
        write(2, "error\n", 6);
    else if(open(argv[2], O_RDONLY) == -1) {
        m = open(argv[2], O_RDWR | O_CREAT, 0644);
        while(read(f, &ch,1))
            write(m, &ch, 1);
    }
    else
        write(2, "error\n", 6);
    close(f);
    close(m);
    return 0;
}
