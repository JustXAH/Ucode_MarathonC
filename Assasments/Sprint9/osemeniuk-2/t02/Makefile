NAME = minilibmx.a

all: MINILIBMX 

MINILIBMX:
	mkdir obj
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_atoi.c -o ./obj/mx_atoi.o 
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_isdigit.c -o ./obj/mx_isdigit.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_isspace.c -o ./obj/mx_isspace.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_printchar.c -o ./obj/mx_printchar.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_printint.c -o ./obj/mx_printint.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_printstr.c -o ./obj/mx_printstr.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_strcpy.c -o ./obj/mx_strcpy.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_strcmp.c -o ./obj/mx_strcmp.o
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include \
	./inc/minilibmx.h -c ./src/mx_strlen.c -o ./obj/mx_strlen.o

	ar r minilibmx.a ./obj/mx_atoi.o 
	ar r minilibmx.a ./obj/mx_isdigit.o 
	ar r minilibmx.a ./obj/mx_isspace.o 
	ar r minilibmx.a ./obj/mx_printint.o 
	ar r minilibmx.a ./obj/mx_printstr.o 
	ar r minilibmx.a ./obj/mx_strcpy.o 
	ar r minilibmx.a ./obj/mx_printchar.o 
	ar r minilibmx.a ./obj/mx_strcmp.o 
	ar r minilibmx.a ./obj/mx_strlen.o	
	
clean:
	rm -rf obj

uninstall: 
	rm -rf minilibmx.a

reinstall: uninstall all
