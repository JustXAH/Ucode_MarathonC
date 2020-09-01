CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
NAME = mx_cat
SRC_DIR = src
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
INC_FILES = $(wildcard $(INC_DIR)/*.h)

all: NAME

NAME: $(INC_FILES) $(SRC_FILES)
	@$(CC) $(CFLAGS) $(SRC_FILES) -I$(INC_DIR) -o $(NAME)

uninstall: 
	@rm -rdf $(NAME)

reinstall: uninstall all
