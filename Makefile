# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beloff <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 02:40:51 by beloff            #+#    #+#              #
#    Updated: 2018/06/13 03:21:06 by beloff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AC = ar -rc

RLIB = ranlib

SRCS = ./*.c 

OBJS = $(SRCS:.c=.o)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AC) $(NAME) $(OBJS)
		@$(RLIB) $(NAME)
		@echo "Library successfully created"

all: $(NAME)

clean:
		@rm -rf $(OBJS)
		@echo "Object files successfully removed"

fclean:	clean
		@rm -rf $(NAME)
		@echo "Library successfully removed"

re:		fclean all
