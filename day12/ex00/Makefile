# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 18:13:34 by xwang             #+#    #+#              #
#    Updated: 2018/08/09 19:47:58 by xwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ./main.c ./functions.c
OBJS = ./main.o ./functions.o

all:
	gcc -Wall -Wextra -Werror -c $(SRCS)
	gcc $(OBJS) -I. -o $(NAME) 

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
