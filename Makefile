CC = gcc
CFLAGS = -Wall -Wextra -g

all: hello

hello: fibonacci.c
	$(CC) $(CFLAGS) -o hello fibonacci.c

.PHONY: clean

clean:
	rm -f hello
