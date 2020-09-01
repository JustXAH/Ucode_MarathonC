# --------------объявление переменных--------------
# имя библиотеки
MINILIBMX = minilibmx.a

# используемые директории
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

# список всех файлов в папке src, которые имеют расширение .с
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# добавить префикс obj/ к каждой записи из SRC_FILES, в который убрали
# путь и изменить
# расширение с .с на .о
# результат выполнения src/<file_name>.o  --> obj/<file_name>.o
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))

# список всех файлов в папке inc, которые имеют расширение .h
INC_FILES = $(wildcard $(INC_DIR)/*.h)

# компилятор
CC = clang

# флаги для компилятора (добабить префикс -W ко всем записям после
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

# архиватор для формирования библиотеки из о-файлов
AR = ar

#флаги для архиватора
AFLAGS = rcs

MKDIR = mkdir -p
RM = rm -rf

# -------------главная цель, при ее вызове создаётся minilibmx.a-------------
all: MINILIBMX

# архивируем о-файлы в Minilibmx.a и запускаем её
MINILIBMX: $(OBJ_FILES)
	@$(AR) $(AFLAGS) $(MINILIBMX) $^
	@printf "\r\33[2K$@\t \033[32;1mcreated\033[0m\n"

# провекрка наличия о-файлов перед компиляцией, переходим к созданию папки
$(OBJ_FILES): $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)
	@printf "\r\33[2K$(NAME)\033[33;1m\t compile \033[0m$(<:$(SRC_DIR)/%.c=%)\r"

# создается папка obj
$(OBJ_DIR):
	@$(MKDIR) $@

# удаляем папку с о-файлами
clean:
	@$(RM) $(OBJ_DIR) $@
	@$(RM) $(OBJ_FILES) $@
	@printf "$(OBJ_DIR) in $(NAME)\t \033[31;1mdeleted\033[0m\n"

# полностью удаляем результат работы мейкфайла
uninstall: clean
	@$(RM) $(MINILIBMX) $@
	@@printf "$(NAME)\t \033[31;1muninstalled\033[0m\n"

# удаляем и заново собираем библиотеку
reinstall: uninstall all

.PHONY: all uninstall clean reinstall

