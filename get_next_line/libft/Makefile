# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijanie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 11:33:44 by ijanie            #+#    #+#              #
#    Updated: 2019/04/15 19:56:53 by ijanie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_strdel.c \
ft_strlcat.c ft_strncpy.c ft_strstr.c ft_atoi.c ft_isprint.c \
ft_memcpy.c	ft_putendl.c ft_strcat.c ft_strdup.c ft_strlen.c ft_strnequ.c \
ft_strsub.c ft_bzero.c ft_itoa.c ft_memdel.c ft_putendl_fd.c ft_strchr.c \
ft_strequ.c	ft_strmap.c	ft_strnew.c	ft_strtrim.c ft_isalnum.c ft_memalloc.c \
ft_memmove.c ft_putnbr.c ft_strclr.c ft_striter.c ft_strmapi.c ft_strnstr.c \
ft_tolower.c ft_isalpha.c ft_memccpy.c ft_memset.c ft_putnbr_fd.c ft_strcmp.c \
ft_striteri.c ft_strncat.c ft_strrchr.c ft_toupper.c ft_isascii.c ft_memchr.c \
ft_putchar.c ft_putstr.c ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strsplit.c \
ft_swap.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
ft_lstnew.c

OBJECTS = $(SRCS:%.c=%.o)

INCLUDES =./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	    @gcc -Wall -Wextra -Werror -c $(SRCS)
		    @ar rc $(NAME) $(OBJECTS)
			    @ranlib $(NAME)

clean:
	    @/bin/rm -f $(OBJECTS)

fclean: clean
	    @/bin/rm -f $(NAME)

re: fclean all
