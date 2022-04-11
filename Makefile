# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/12/02 15:21:42 by hmanilow          #+#    #+#             #
#   Updated: 2021/12/02 15:21:42 by hmanilow         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libftprintf.a
#
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
AR = ar rcs
RM = rm -rf
#
HEADER = ft_printf.h
#
SRC =	ft_printf.c\
		ft_checking.c\
		lib_part1.c\
		lib_part2.c\
#
OBJ_DIR = ./obj
OBJ	= $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))
#
.PHONY	: all clean fclean re
#
all	: 	$(NAME)
#
$(NAME)	:	$(OBJ)
		$(AR) $@ $(?)
#
$(OBJ_DIR)/%.o	:	%.c $(HEADER)
	@mkdir -p ${OBJ_DIR}
	$(CC) $(CFLAGS) -c $< -o $@
#
clean	:
		$(RM) $(OBJ_DIR)
#
fclean	:	clean
		$(RM) $(NAME)
#
re	:	fclean all