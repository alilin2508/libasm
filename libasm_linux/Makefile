# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alilin <alilin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 11:54:43 by alilin            #+#    #+#              #
#    Updated: 2021/02/02 11:46:40 by alilin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

INCLS		= libasm.h

SRCS		= ft_strlen.s \
		  ft_strcpy.s \
		  ft_strcmp.s \
		  ft_write.s \
		  ft_read.s \
		  ft_strdup.s \

OBJS		= $(SRCS:.s=.o)

%.o	:		%.s
			nasm -felf64 $<

all	:		$(NAME)

$(NAME)	:		$(OBJS)
			ar rc $(NAME) $(OBJS)
			gcc -Wall -Wextra -Werror -o test main.c -lasm -L .

clean	:
			rm -rf $(OBJS)

fclean	:		clean
			rm -rf $(NAME)
			rm -rf test

re	:		fclean all
