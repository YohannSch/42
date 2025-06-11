# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/05 12:49:33 by yscheupl          #+#    #+#              #
#    Updated: 2025/06/11 17:33:18 by yscheupl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

#Source#####################################
#PATH_SRCS = libft/

SOURCES_LIBFT += src/ft_atoi.c
SOURCES_LIBFT += src/ft_bzero.c
SOURCES_LIBFT += src/ft_calloc.c
SOURCES_LIBFT += src/ft_isalnum.c
SOURCES_LIBFT += src/ft_isalpha.c
SOURCES_LIBFT += src/ft_isascii.c
SOURCES_LIBFT += src/ft_isdigit.c
SOURCES_LIBFT += src/ft_isprint.c
SOURCES_LIBFT += src/ft_itoa.c
SOURCES_LIBFT += src/ft_memchr.c
SOURCES_LIBFT += src/ft_memcmp.c
SOURCES_LIBFT += src/ft_memcpy.c
SOURCES_LIBFT += src/ft_memmove.c
SOURCES_LIBFT += src/ft_memset.c
SOURCES_LIBFT += src/ft_putchar_fd.c
SOURCES_LIBFT += src/ft_putendl_fd.c
SOURCES_LIBFT += src/ft_putnbr_fd.c
SOURCES_LIBFT += src/ft_putstr_fd.c
SOURCES_LIBFT += src/ft_split.c
SOURCES_LIBFT += src/ft_strchr.c
SOURCES_LIBFT += src/ft_strdup.c
SOURCES_LIBFT += src/ft_striteri.c
SOURCES_LIBFT += src/ft_strjoin.c
SOURCES_LIBFT += src/ft_strlcat.c
SOURCES_LIBFT += src/ft_strlcpy.c
SOURCES_LIBFT += src/ft_strlen.c
SOURCES_LIBFT += src/ft_strmapi.c
SOURCES_LIBFT += src/ft_strncmp.c
SOURCES_LIBFT += src/ft_strnstr.c
SOURCES_LIBFT += src/ft_strrchr.c
SOURCES_LIBFT += src/ft_strtrim.c
SOURCES_LIBFT += src/ft_substr.c
SOURCES_LIBFT += src/ft_tolower.c
SOURCES_LIBFT += src/ft_toupper.c
#SOURCES_LIBFT += src/ft_putnbr_base_fd.c
#SOURCES_LIBFT += src/ft_atoll.c
#SOURCES_LIBFT += src/ft_strcat.c
#SOURCES_LIBFT += src/ft_strcpy.c

#Includes###################################
INCLUDES_LIBFT = libft.h

#Compilation################################
CC = cc

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
CFLAGS += -g3
#Rules######################################

OBJ = $(SOURCES_LIBFT:.c=.o)

all: $(NAME)

$(NAME): 
	cc $(CFLAGS) -c $(SOURCES_LIBFT)
	ar rcs $(NAME) *.o

clean: 
	rm *.o

fclean: clean
	rm $(NAME)
	
re: fclean all


.PHONY: all clean fclean re