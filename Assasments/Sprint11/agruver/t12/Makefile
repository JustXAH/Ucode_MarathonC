CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SRC_DIR = src
INC_DIR = inc
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
NAME = playlist

all: install clean

install: PLAYLIST

PLAYLIST:
	@$(CC) $(CFLAGS) $(SRC_FILES) -I$(INC_DIR) -c
	@$(CC) $(CFLAGS) $(SRC_FILES) -I$(INC_DIR) -o $(NAME)

uninstall: clean
	@rm -f $(NAME)

clean:
	@rm -f *.o

reinstall: uninstall all

