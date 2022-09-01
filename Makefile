CC=gcc
CFLAGS=-Wall -pedantic-errors -g

all: linkedList.o stack.o queue.o

linkedList.o: src/LinkedListLibrary/linkedList.c src/LinkedListLibrary/linkedList.h
	$(CC) -c $< $(CFLAGS)

stack.o: src/stack/stack.c src/stack/stack.h
	$(CC) -c $< $(CFLAGS)

queue.o: src/queue/queue.c src/queue/queue.h
	$(CC) -c $< $(CFLAGS)