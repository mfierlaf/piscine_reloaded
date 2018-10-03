# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 15:52:13 by mfierlaf          #+#    #+#              #
#    Updated: 2018/10/03 16:23:39 by mfierlaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ~/srcs/ ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

HEADERS = ~/includes/

OBJECTS = *o

FLAGS = -Wall -Wextra -Werror

all:
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
