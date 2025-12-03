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

CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -g3
AR      := ar rcs
RM      := rm -f

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

# If libft directory is present, build it when needed
ifneq ($(wildcard $(LIBFT_DIR)),)
LINK_LIBFT := $(LIBFT_A)
else
LINK_LIBFT :=
endif

# Default target builds both executables
all: $(NAME)

# Individual targets
$(NAME): $(OBJS_PUSH) $(LINK_LIBFT)
	@echo "Linking $@"
	$(CC) $(CFLAGS) -o $@ $(OBJS_PUSH) $(LINK_LIBFT)

# If a libft folder exists but libft.a is missing, run make in libft
$(LIBFT_A):
ifneq ($(wildcard libft),)
	@$(MAKE) -C libft
endif

# Compile .c -> .o
%.o: %.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -I./include -c $< -o $@

# Helpers
push_swap: $(NAME)

bonus: all


clean:
	@echo "Cleaning objects..."
	$(RM) $(OBJS_PUSH)
ifneq ($(wildcard libft),)
	@$(MAKE) -C libft clean || true
endif

fclean: clean
	@echo "Removing binaries..."
	$(RM) $(NAME)
ifneq ($(wildcard libft),)
	@$(MAKE) -C libft fclean || true
endif

re: fclean all

.PHONY: all push_swap checker bonus clean fclean re