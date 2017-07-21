CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=libft.a

all:
	$(CC) $(CFLAGS) -c srcs/ft_putchar.c
	$(CC) $(CFLAGS) -c srcs/ft_putstr.c
	$(CC) $(CFLAGS) -c srcs/ft_strcmp.c
	$(CC) $(CFLAGS) -c srcs/ft_strlen.c
	$(CC) $(CFLAGS) -c srcs/ft_swap.c
	ar -rc $(EXEC) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(EXEC)

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f libft.a

re: fclean all
