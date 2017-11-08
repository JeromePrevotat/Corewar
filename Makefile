CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB = -L./libft -lft -L./libft/ft_printf -lftprintf
MAKE = make
NAME1 = corewar
NAME2 = asm

SRCS1 += ./src/corewar/main.c
SRCS1 += ./src/corewar/utils.c
SRCS1 += ./src/corewar/free_ressources.c

SRCS2 += ./src/asm/main.c

INC1 += ./inc/corewar/corewar.h
INC2 += ./inc/asm/asm.h

OBJ1 = $(SRCS1:.c=.o)
OBJ2 = $(SRCS2:.c=.o)

all: $(NAME1) $(NAME2)

$(NAME1): libft $(OBJ1) $(INC1)
	$(CC) $(CFLAGS) $(LIB) -g $(SRCS1) -o $@

$(NAME2): libft $(OBJ2) $(INC2)
	$(CC) $(CFLAGS) $(LIB) -g $(SRCS2) -o $@

.PHONY: libft clean fclean

clean:
	rm -rf $(OBJ1) $(OBJ2)
	cd ./libft && $(MAKE) clean

fclean: clean
	rm -rf $(NAME1) $(NAME2)
	cd ./libft && $(MAKE) fclean

re:	fclean all

libft:
	cd ./libft && $(MAKE)
