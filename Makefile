# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saharchi <saharchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 03:16:38 by saharchi          #+#    #+#              #
#    Updated: 2023/12/06 12:30:19 by saharchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
ARC = ar rc
CC = cc
RM = rm -f
SURC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_address.c 

OBJC = $(SURC:.c=.o)

$(NAME) : $(OBJC)
	$(ARC) $(NAME) $(OBJC)

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJC)

fclean : clean
	$(RM) $(NAME)

re : fclean all

