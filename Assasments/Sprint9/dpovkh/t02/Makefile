SRC_S =  src/mx_atoi.c \
	src/mx_isdigit.c \
	src/mx_isspace.c \
	src/mx_printchar.c \
	src/mx_printint.c \
	src/mx_printstr.c \
	src/mx_strcpy.c \
	src/mx_strcmp.c \
	src/mx_strlen.c
INC_S = inc/header.h
OBJ_S =  mx_atoi.o \
	mx_isdigit.o \
	mx_isspace.o \
	mx_printchar.o \
	mx_printint.o \
	mx_printstr.o \
	mx_strcpy.o \
	mx_strcmp.o \
	mx_strlen.o \

all: install create clean

install: $(SRC_S)
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic --include $(INC_S) -c $(INC_S)
create:
	ar r minilibmx.a $(OBJ_S)
clean:
	rm $(OBJ_S)
uninstall:
	rm -rf minilibmx.a
reinstall: uninstall all
