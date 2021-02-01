# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alilin <alilin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 11:54:43 by alilin            #+#    #+#              #
#    Updated: 2021/02/01 16:08:14 by alilin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a

INCLS		= libasm.h

SRCS		= ft_strlen.s \
			  ft_strcpy.s \
			  ft_strcmp.s \
			  ft_write.s \
			  ft_read.s \

OBJS		= $(SRCS:.s=.o)

%.o	:		%.s
			nasm -fmacho64 $<

all	:		$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $(NAME) $(OBJS)
			gcc -Wall -Wextra -Werror -L. -lasm -o test main.c

clean	:
			rm -rf $(OBJS)

fclean	:	clean
			rm -rf $(NAME)
			rm -rf test

re	:		fclean all
