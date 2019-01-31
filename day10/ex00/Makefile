# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 12:55:50 by xwang             #+#    #+#              #
#    Updated: 2018/08/06 15:00:11 by xwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -Wall -Werror -Wextra -c -I $(HEADER) $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean 
	/bin/rm -f $(NAME)
re: fclean all
