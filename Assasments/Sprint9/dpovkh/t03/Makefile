NAME = minilibmx.a
OBJ = obj

SRC =  src/*.c

OUT =  ./*.o

CLANG = -std=c11 -Wall -Wextra -Werror -Wpedantic

INC = inc/header.h

all: install clean

install:
	@mkdir $(OBJ)
	@clang $(CLANG) -c $(SRC) -I $(INC)
	@ar -rc $(NAME) $(OUT)
	@mv $(OUT) $(OBJ)

clean:
	@rm -rf $(OBJ)

uninstall:
	@rm -rf $(NAME)
	@rm -rf $(OBJ)
	@rm -rf $(OUT)

reinstall: clean all
