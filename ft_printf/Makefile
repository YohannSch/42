# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 12:37:01 by yscheupl          #+#    #+#              #
#    Updated: 2025/06/28 12:38:22 by yscheupl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

#Source#####################################

SRC += ft_printf_utils.c
SRC += ft_printf_utils2.c
SRC += ft_printf.c

#Includes###################################

INCLUDES_LIBFT = ft_printf.h

#Compilation################################

CC = gcc

CFLAGS := -Werror -Wextra -Wall -g3

#Rules######################################

OBJ := $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(INCLUDES_LIBFT)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re