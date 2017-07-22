CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=colle-2

all:
	$(CC) $(CFLAGS) -o $(EXEC) main.c check_dim.c list_utils.c parser.c solve.c str.c

fclean:
	rm -f $(EXEC)

re: fclean all
