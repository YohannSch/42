# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/05 12:49:33 by yscheupl          #+#    #+#              #
#    Updated: 2025/06/16 20:28:19 by yscheupl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

# Directories
SRCDIR := src
OBJDIR := .

#Source#####################################

SRC += src/ft_atoi.c
SRC += src/ft_bzero.c
SRC += src/ft_calloc.c
SRC += src/ft_isalnum.c
SRC += src/ft_isalpha.c
SRC += src/ft_isascii.c
SRC += src/ft_isdigit.c
SRC += src/ft_isprint.c
SRC += src/ft_itoa.c
SRC += src/ft_memchr.c
SRC += src/ft_memcmp.c
SRC += src/ft_memcpy.c
SRC += src/ft_memmove.c
SRC += src/ft_memset.c
SRC += src/ft_putchar_fd.c
SRC += src/ft_putendl_fd.c
SRC += src/ft_putnbr_fd.c
SRC += src/ft_putstr_fd.c
SRC += src/ft_split.c
SRC += src/ft_strchr.c
SRC += src/ft_strdup.c
SRC += src/ft_striteri.c
SRC += src/ft_strjoin.c
SRC += src/ft_strlcat.c
SRC += src/ft_strlcpy.c
SRC += src/ft_strlen.c
SRC += src/ft_strmapi.c
SRC += src/ft_strncmp.c
SRC += src/ft_strnstr.c
SRC += src/ft_strrchr.c
SRC += src/ft_strtrim.c
SRC += src/ft_substr.c
SRC += src/ft_tolower.c
SRC += src/ft_toupper.c

#Includes###################################

INCLUDES_LIBFT = libft.h

#Compilation################################

CC = gcc

CFLAGS := -Werror -Wextra -Wall -g3

#Rules######################################

OBJ := $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(OBJDIR):
	@mkdir -p $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
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

.PHONY: all, clean, fclean, re