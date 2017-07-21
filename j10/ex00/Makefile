CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=libft.a

all:
	$(CC) $(CFLAGS) -o srcs/ft_putchar.c
	$(CC) $(CFLAGS) -o srcs/ft_putstr.c
	$(CC) $(CFLAGS) -o srcs/ft_strcmp.c
	$(CC) $(CFLAGS) -o srcs/ft_strlen.c
	$(CC) $(CFLAGS) -o srcs/ft_swap.c

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f libft.a

re: fclean all
