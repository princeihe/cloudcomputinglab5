CC = gcc
CFLAGS = -Wall -Wextra -g

all: hello

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

.PHONY: clean

clean:
	rm -f hello
