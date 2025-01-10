# VARIABLES
CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft
LDFLAGS = -Llibft -lft
LIBFT = libft/libft.a
LEAKS = -fsanitize=address
NAME = libftprintf.a
SRC = $(shell find . -name "ft_*.c")
OBJTS = $(SRC:.c=.o)

# RULES
all: $(NAME)
	$(CC) $(CFLAGS) $(OBJTS) $(LDFLAGS) -o main

$(NAME): $(OBJTS) $(LIBFT)
	ar rcs $(NAME) $(OBJTS)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJTS)

fclean: clean
	rm -f $(NAME) main

re: fclean all

.PHONY: all clean fclean re