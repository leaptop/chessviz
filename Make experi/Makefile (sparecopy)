CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = main.o build/move.o build/board.o

.PHONY: clean all bin build default test

SOURCES = src/main.c src/move.c src/board.c
OBJECTS = $(SOURCES:src/.c=bin/.o)

#iEdit: $(patsubst %.c,%.o,$(wildcard *.c))
#gcc $^ -o $@	$	
#%.o: %.c
#gcc -c $<	$
#main.o: main.h board.h move.h
#board.o: board.h move.h
#move.o: move.h

$(PROJECT): $(SOURCES)


	
all: bin build default test
default: bin/prog
bin/prog: $(OBJECTS) 
	$(CXX) $(FLAGS) $(OBJECTS) -o main

build/main.o: src/main.c src/board.h  src/move.h
	$(CXX) $(CFLAGS) src/main.c  -o build/main.o

build/move.o: src/move.c src/board.h  src/move.h
	$(CXX) $(CFLAGS) src/move.c -o build/move.o

build/board.o: src/board.c src/board.h  src/move.h
	$(CXX) $(CFLAGS) src/board.c -o build/board.o
	
	#gcc -Wall -Werror -o main src/main.c
	#gcc -Wall -Werror -o bin/move src/move.c
	#gcc -Wall -Werror -o bin/board src/board.c
build:
	mkdir build
	mkdir bin 

clean:
	-rm -rf build bin

