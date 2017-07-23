CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=ft_cat

SRC=ft_cat.c

OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) -o $@ $^

%.o: %.c
		$(CC) -o $@ -c $<

clean:
		rm -rf *.o
