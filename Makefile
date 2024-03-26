SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g


all: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o tree

# C is the c file which I wish to compile
task: main.c $(C) print_tree.c
	$(CC) $(CFLAGS) main.c print_tree.c $(C) -o tree

clean:
	rm -f *~ *.swp *# tree $(OBJ)
