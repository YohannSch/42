# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yscheupl <yscheupl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/05 12:49:33 by yscheupl          #+#    #+#              #
#    Updated: 2025/06/05 12:51:42 by yscheupl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_LIBFT:= libft.a
NAME := push_swap

#Source#####################################
#PATH_SRCS = Libft/

SOURCES_LIBFT += Libft/src/ft_atoi.c
SOURCES_LIBFT += Libft/src/ft_bzero.c
SOURCES_LIBFT += Libft/src/ft_calloc.c
SOURCES_LIBFT += Libft/src/ft_isalnum.c
SOURCES_LIBFT += Libft/src/ft_isalpha.c
SOURCES_LIBFT += Libft/src/ft_isascii.c
SOURCES_LIBFT += Libft/src/ft_isdigit.c
SOURCES_LIBFT += Libft/src/ft_isprint.c
SOURCES_LIBFT += Libft/src/ft_itoa.c
SOURCES_LIBFT += Libft/src/ft_memchr.c
SOURCES_LIBFT += Libft/src/ft_memcmp.c
SOURCES_LIBFT += Libft/src/ft_memcpy.c
SOURCES_LIBFT += Libft/src/ft_memmove.c
SOURCES_LIBFT += Libft/src/ft_memset.c
SOURCES_LIBFT += Libft/src/ft_putchar_fd.c
SOURCES_LIBFT += Libft/src/ft_putendl_fd.c
SOURCES_LIBFT += Libft/src/ft_putnbr_fd.c
SOURCES_LIBFT += Libft/src/ft_putstr_fd.c
SOURCES_LIBFT += Libft/src/ft_split.c
SOURCES_LIBFT += Libft/src/ft_strchr.c
SOURCES_LIBFT += Libft/src/ft_strdup.c
SOURCES_LIBFT += Libft/src/ft_striteri.c
SOURCES_LIBFT += Libft/src/ft_strjoin.c
SOURCES_LIBFT += Libft/src/ft_strlcat.c
SOURCES_LIBFT += Libft/src/ft_strlcpy.c
SOURCES_LIBFT += Libft/src/ft_strlen.c
SOURCES_LIBFT += Libft/src/ft_strmapi.c
SOURCES_LIBFT += Libft/src/ft_strncmp.c
SOURCES_LIBFT += Libft/src/ft_strnstr.c
SOURCES_LIBFT += Libft/src/ft_strrchr.c
SOURCES_LIBFT += Libft/src/ft_strtrim.c
SOURCES_LIBFT += Libft/src/ft_substr.c
SOURCES_LIBFT += Libft/src/ft_tolower.c
SOURCES_LIBFT += Libft/src/ft_toupper.c
SOURCES_LIBFT += Libft/src/ft_printf.c
SOURCES_LIBFT += Libft/src/ft_printf_dependancy.c
SOURCES_LIBFT += Libft/src/ft_putnbr_base_fd.c
SOURCES_LIBFT += Libft/src/ft_lstadd_back.c
SOURCES_LIBFT += Libft/src/ft_lstadd_front.c
SOURCES_LIBFT += Libft/src/ft_lstclear.c
SOURCES_LIBFT += Libft/src/ft_lstdelone.c
SOURCES_LIBFT += Libft/src/ft_lstiter.c
SOURCES_LIBFT += Libft/src/ft_lstlast.c
SOURCES_LIBFT += Libft/src/ft_lstmap.c
SOURCES_LIBFT += Libft/src/ft_lstnew.c
SOURCES_LIBFT += Libft/src/ft_lstsize.c
SOURCES_LIBFT += Libft/src/ft_count_words.c
SOURCES_LIBFT += Libft/src/ft_atoll.c
SOURCES_LIBFT += Libft/src/ft_strcat.c
SOURCES_LIBFT += Libft/src/ft_strcpy.c
SOURCES_LIBFT += Libft/src/ft_free_tab.c
SOURCES_LIBFT += Libft/src/ft_pileadd_back.c
SOURCES_LIBFT += Libft/src/ft_pileadd_front.c
SOURCES_LIBFT += Libft/src/ft_pileclear.c
SOURCES_LIBFT += Libft/src/ft_piledelone.c
SOURCES_LIBFT += Libft/src/ft_pileiter.c
SOURCES_LIBFT += Libft/src/ft_pilelast.c
SOURCES_LIBFT += Libft/src/ft_pilemap.c
SOURCES_LIBFT += Libft/src/ft_pilenew.c
SOURCES_LIBFT += Libft/src/ft_pilesize.c

SOURCES_PUSH_SWAP = *.c

#Objets#####################################
#PATH = obj/
#OBJ = $(SOURCES: .c= .o)

OBJ = *.o

#Includes###################################
INCLUDES_LIBFT = Libft/libft.h
INCLUDES = Push_Swap.h

#Compilation################################
CC = cc

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
CFLAGS += -g3
#Rules######################################

all:
	$(MAKE) all_libft
	$(MAKE) $(NAME)

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES_PUSH_SWAP) -I $(INCLUDES) -I $(INCLUDES_LIBFT) $(NAME_LIBFT) -o $(NAME)

clean: fclean_libft

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
	

all_libft: $(NAME_LIBFT)
 
#$(OBJ):
#	mkdir $(PATH)
#	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES) -o $(PATH)

$(NAME_LIBFT): $(SOURCES_LIBFT)
	mkdir ./obj/
	$(CC) $(CFLAGS) -c $(SOURCES_LIBFT) -I $(INCLUDES_LIBFT)
	mv *.o obj/
	ar rcs $(NAME_LIBFT) ./obj/$(OBJ)

clean_libft:
	rm -rf obj

fclean_libft: clean_libft
	rm -rf $(NAME_LIBFT)

relibft: fclean_libft
	$(MAKE) all_libft