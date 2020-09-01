CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
NAME = read_file
SRC_DIR = src
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
INC_FILES = $(wildcard $(SRC_DIR)/*.c)

all: NAME

NAME: $(INC_FILES) $(SRC_FILES)
	@$(CC) $(CFLAGS) $(SRC_FILES) -I$(INC_DIR) -o $(NAME)

uninstall: 
	@rm -rdf $(NAME)

reinstall: uninstall all
