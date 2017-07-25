CC=gcc

CFLAGS=-Wall -Werror -Wextra -O2

EXEC=bsq

SRC=ft_atoi.c handle_algo.c list_utils.c main.c parser.c str.c check_map.c solve.c math.c str2.c print_result.c

OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) -o $@ $^

%.o: %.c
		@$(CC) -o $@ -c $< $(CFLAGS)

fclean:
	rm -rf $(EXEC)

clean:
		rm -rf *.o
