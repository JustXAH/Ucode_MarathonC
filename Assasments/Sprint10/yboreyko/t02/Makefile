CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

FILE_NAMES = mx_cat


SRC_DIR = "./src/"
INC_DIR = "./inc/"

all: install clean

install: FILE_NAMES

FILE_NAMES:
	@$(CC) $(CFLAGS) $(addprefix $(SRC_DIR), $(addsuffix ".c", $(FILE_NAMES))) -I$(INC_DIR) -o $(FILE_NAMES)

clean:

reinstall: uninstall all
