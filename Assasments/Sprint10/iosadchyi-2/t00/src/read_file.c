#include "header.h"

int main(int argc, const char **argv) 
{  
    unsigned int ret;
    char ch;
    int fd;

    if(argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return 0;
    }
    fd = open(argv[1], O_RDONLY);

    if(fd < 0) {
        write(2, "error\n", 6);
        return 0;
    }
    while((ret = read(fd, &ch, 1))) {
        write(1, &ch, 1);
    }
    if(ret < 0) {
        write(2, "error\n", 6);
        return 0;
    }
    close(fd);
}
