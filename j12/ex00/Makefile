CC=gcc

CFLAGS=-Wall -Werror -Wextra

EXEC=ft_display_file

SRC=ft_display_file.c

OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) -o $@ $^

%.o: %.c
		$(CC) -o $@ -c $<

clean:
		rm -rf *.o
