CC=gcc
CFLAGS=-I.

bin/%.o: src/%.c 
	$(CC) -c -o $@ $< $(CFLAGS)

bin/add: bin/add.o 
	$(CC) -o bin/add bin/add.o 
