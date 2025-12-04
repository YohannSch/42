contents=#
# Makefile template for push_swap (adapt SRCS_* lists to your project layout)
# Usage:
#  - run `make` or `make all` to build push_swap and checker
#  - run `make push_swap` or `make checker` to build a single binary
#  - run `make clean`, `make fclean`, `make re` as usual
#
# Edit SRCS_PUSH and SRCS_CHECKER to match your source files. If you use a libft
# submodule/library in ./libft this Makefile will try to build and link it.
#

CC      := cc
CFLAGS  := -Wall -Wextra -Werror -g3
RM      := rm -rf

NAME    := push_swap

# === Edit these lists to match your project source files ===
# Example:
# SRCS_PUSH    := srcs/push_swap.c srcs/parse.c srcs/ops.c srcs/utils.c
# SRCS_CHECKER := srcs/checker.c srcs/utils.c srcs/ops.c
SRCS_PUSH    := push_swap.c parsing/parsing.c parsing/parsing_utils.c commands/swap.c commands/push.c commands/rotate.c commands/reverse.c algo/algo.c algo/algo_utils.c parsing/parsing_utils2.c
# ==========================================================

OBJS_PUSH    := $(SRCS_PUSH:.c=.o)

# Optional libft (will be used only if ./libft/libft.a exists or libft dir exists)
LIBFT_A := libft/libft.a
LIBFT_DIR := libft


# Default target builds both executables
all: $(LIBFT_A) $(NAME)
	
$(LIBFT_A) : $(LIBFT_DIR)
	make -C $(LIBFT_DIR)

# Individual targets
$(NAME): $(OBJS_PUSH)
	$(CC) $(CFLAGS) -o $@ $(OBJS_PUSH) $(LIBFT_A)


# Compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Helpers

bonus: all


clean:
	make -C libft/ fclean
	$(RM) $(OBJS_PUSH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all push_swap checker bonus clean fclean re