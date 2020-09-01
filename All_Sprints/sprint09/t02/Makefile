# --------------объявление переменных--------------
# имя библиотеки
MINILIBMX = minilibmx.a

# используемые директории
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

# имена используемых файлов без префиксов (mx)
FILE_NAMES = atoi isdigit isspace printchar printint printstr strcmp strcpy\
strlen
HEADER_NAMES = minilibmx

# Первый шаг (добавление префикса и суфикса С файлам) ДО:atoi ПОСЛЕ:mx_atoi.с;
# Второй шаг (добавление префикса и суфикса O файлам) ДО:atoi ПОСЛЕ:mx_atoi.o;
SRC_FILES = $(addprefix $(SRC_DIR)/mx_, $(addsuffix .c, $(FILE_NAMES)))
OBJ_FILES = $(addprefix mx_, $(addsuffix .o, $(FILE_NAMES)))

# компилятор
CC = clang

# флаги для компилятора
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

# архиватор для формирования библеотеки из объектных файлов
AR = ar

# флаги для архиватора
AFLAGS = rcs

MKDIR = mkdir -p
RM = rm -rf

# -------------главная цель, при ее вызове создаётся minilibmx.a-------------
all: MINILIBMX

# архивируем о-файлы в Minilibmx.a и запускаем её
MINILIBMX: $(OBJ_FILES)
	$(AR) $(AFLAGS) $(MINILIBMX) $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

# создаём obj папку и компилируем в неё о-файлы
$(OBJ_FILES): $(SRC_FILES) $(INC_FILES)
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC_FILES) -I $(INC_DIR)
	mv $(OBJ_FILES) $(OBJ_DIR)

clean:
	$(RM) $(OBJ_DIR)
	$(RM) $(OBJ_FILES)

uninstall: clean
	$(RM) $(MINILIBMX)

reinstall: uninstall all

.PHONY: all uninstall clean reinstall
