CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=ft_tail

all:
	$(CC) $(CFLAGS) -o $(EXEC) ft_tail.c handle_error.c handle_error_msg.c handle_stdin.c parse_args.c print_files.c str.c

fclean:
	rm -rf $(EXEC)

clean:
	rm -rf ft_tail.o
