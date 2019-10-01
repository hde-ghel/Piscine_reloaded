# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 11:45:47 by hde-ghel          #+#    #+#              #
#    Updated: 2018/10/07 19:04:00 by hde-ghel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
P_SRC = ./srcs/
INCLUDE = ./include/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(INCLUDE)
SRC = $(P_SRC)ft_putchar.c $(P_SRC)ft_putstr.c $(P_SRC)ft_strcmp.c \
$(P_SRC)ft_strlen.c $(P_SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
	gcc  $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
