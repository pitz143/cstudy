CC=gcc
CFLAGS=-I.
EXES= bin/add bin/add_func bin/subs_func bin/multi_func bin/divide_func
bin/%.o: src/%.c 
	$(CC) -c -o $@ $< $(CFLAGS)

bin/%x: bin/%x.o 
	$(CC) -c -o $@ $< $(CFLAGS)

all: ${EXES}

clean:
	rm ${EXES}
