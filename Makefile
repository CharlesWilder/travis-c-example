PRGNAME = travis-c-test
CFLAGS = -g -Wall -std=c99

OBJ = some_lib.o main_test.o

all: clean test

main_test.o: main_test.c some_lib.h greatest.h
some_lib.o: some_lib.c some_lib.h

test: $(OBJ)
	$(CC) $(CFLAGS) -o $(PRGNAME) $(OBJ)

dep:
	$(CC) -MM $(CFLAGS) *.c

clean:
	rm -rf *.o $(PRGNAME)
