CC=gcc
CFLAGS=-I.

bin/%.o: src/%.c 
	$(CC) -c -o $@ $< $(CFLAGS)

bin/%x: bin/%x.o 
	$(CC) -c -o $@ $< $(CFLAGS)

all: bin/add bin/add_func

clean:
	rm bin/*
