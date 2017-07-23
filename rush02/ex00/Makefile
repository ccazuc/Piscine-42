CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=colle-2

SRC=check_dim.c list_utils.c main.c parser.c solve.c str.c

OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) -o $@ $^

%.o: %.c
		$(CC) -o $@ -c $<

clean:
		rm -rf *.o
