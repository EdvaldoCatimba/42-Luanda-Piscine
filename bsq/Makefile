# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efaustin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 10:22:41 by efaustin          #+#    #+#              #
#    Updated: 2023/12/05 10:22:43 by efaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc -Wall -Wextra -Werror
SRCS = ./srcs/ft_print_words_tables0.c	\
	   ./srcs/ft_putchar.c				\
	   ./srcs/ft_putstr.c				\
	   ./srcs/ft_read.c					\
	   ./srcs/main.c					\
	   ./srcs/alg_demineur.c			\
	   ./srcs/get_params.c				\
	   ./srcs/ft_atoi.c					\
	   ./srcs/parse_dem.c				\
	   ./srcs/ft_file.c
HEADERS = ./includes
OBJ = ./ft_print_words_tables0.o	\
	   ./ft_putchar.o				\
	   ./ft_putstr.o				\
	   ./ft_read.o					\
	   ./main.o						\
	   ./alg_demineur.o				\
	   ./get_params.o				\
	   ./ft_atoi.o					\
	   ./parse_dem.o				\
	   ./ft_file.o

all: objs
	$(CC) -o $(NAME) $(OBJ) -I $(HEADERS)

objs:
	$(CC) -c $(SRCS) -I $(HEADERS)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
