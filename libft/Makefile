# VARIABLES
CC = cc
CFLAGS = -Wall -Wextra -Werror
LEAKS = -fsanitize=address
NAME = libft.a
SRC = $(shell find . -name "ft_*.c")
OBJTS = $(SRC:.c=.o)

# RULES
all: $(NAME)

$(NAME): $(OBJTS)
	ar rcs $(NAME) $(OBJTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re