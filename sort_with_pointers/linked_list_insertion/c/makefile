# Most systems with clang sym link to gcc so to be safe define gcc
CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-libsodium

all: llist

llist: main.o
	$(CC)  main.o -o llist

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -lsodium

clean:
	rm *.o llist
