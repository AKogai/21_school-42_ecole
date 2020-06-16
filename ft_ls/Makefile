# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchieko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/23 19:00:12 by cchieko           #+#    #+#              #
#    Updated: 2019/12/23 19:00:24 by cchieko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC_DIR = ./src
INCL = ./includes
LIB_DIR = ./libft
LIB_HEAD = $(LIB_DIR)/libft.h
FILES = $(addprefix $(SRC_DIR)/, main.c error.c controller.c \
		file_or_dir_input.c flags_input.c file_obj.c wizard.c permissions.c \
		validators.c console.c sort.c sort_utils.c \
		file_obj_create.c input_destroy.c console_output.c console_utils.c \
		dir_processor.c recursion.c console_output_color.c \
		flag_input_utils.c utils.c	console_output_multi_column.c)
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIB_LINK = -L $(LIB_DIR) -lft

SRC = $(FILES)
OBJ = *.o

.PHONY: all make_lib make_obj clean fclean re

all: make_lib make_obj $(NAME)

make_lib:
	@make -C $(LIB_DIR)

make_obj:
	@$(CC) $(LIB_HEAD) -I $(INCL) $(CFLAGS) -c $(SRC)

$(NAME):
	@$(CC) $(OBJ) $(LIB_LINK) -o $(NAME)

clean:
	@make -C $(LIB_DIR) clean
	@$(RM) $(OBJ)
	@echo  "Object files removed!"

fclean: clean
	@make -C $(LIB_DIR) fclean
	@$(RM) $(NAME)
	@echo "Binary files has been removed!"

re: fclean all