# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 20:35:45 by jprevota          #+#    #+#              #
#    Updated: 2017/11/11 14:53:25 by jprevota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREY = \x1b[30m
RED = \x1b[31m
GREEN = \x1b[32m
YELLOW = \x1b[33m
BLUE = \x1b[34m
PURPLE = \x1b[35m
CYAN = \x1b[36m
WHITE = \x1b[37m

CC = @gcc
CFLAGS = -Wall -Werror -Wextra
LIB = -L./libft -lft -L./libft/ft_printf -lftprintf
MAKE = make
NAME1 = corewar
NAME2 = asm

SRCS1 += ./src/corewar/main.c
SRCS1 += ./src/corewar/check_arg.c
SRCS1 += ./src/corewar/utils.c
SRCS1 += ./src/corewar/error_handler.c
SRCS1 += ./src/corewar/free_ressources.c
SRCS1 += ./src/corewar/ft_str_isdigit.c

SRCS2 += ./src/asm/main.c

INC1 += ./inc/corewar/corewar.h
INC2 += ./inc/asm/asm.h

OBJ1 = $(SRCS1:.c=.o)
OBJ2 = $(SRCS2:.c=.o)

all: $(NAME1) $(NAME2)

# Corewar Syntax
# ./corewar [-dump nbr_cycle] [[-n number] prog_name]
$(NAME1): libft $(OBJ1) $(INC1)
	@echo "$(BLUE)>>$(WHITE) Building $(NAME1) $(BLUE)<<$(WHITE)"
	@$(CC) $(CFLAGS) $(LIB) -g $(SRCS1) -o $@
	@echo "$(GREEN)SUCCESS$(WHITE)"

$(NAME2): libft $(OBJ2) $(INC2)
	@echo "$(BLUE)>>$(WHITE) Building $(NAME2) $(BLUE)<<$(WHITE)"
	@$(CC) $(CFLAGS) $(LIB) -g $(SRCS2) -o $@
	@echo "$(GREEN)SUCCESS$(WHITE)"

.PHONY: libft clean fclean

clean:
	@cd ./libft && $(MAKE) clean
	rm -rf $(OBJ1) $(OBJ2)

fclean: clean
	@cd ./libft && $(MAKE) fclean
	rm -rf $(NAME1) $(NAME2)
	rm -rf $(NAME1).dSYM
	rm -rf $(NAME2).dSYM

re:	fclean all

libft:
	@cd ./libft && $(MAKE)
