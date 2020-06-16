# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchieko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 10:25:22 by cchieko           #+#    #+#              #
#    Updated: 2019/08/20 20:06:59 by cchieko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ./c_files/*.c
OBJ = ./c_files/*.o
HEADER = ./c_files/fillit.h
FLAG = -Wall -Wextra -Werror
LIB = libft/

all: $(NAME)

$(NAME):
	make -C $(LIB)
	gcc $(FLAG) -o $(NAME) $(SRC) -I $(HEADER) -L. libft/libft.a

clean:
	/bin/rm -f $(OBJ)
	make -C $(LIB) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIB) fclean

re: fclean all
