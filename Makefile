CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = main.o build/move.o build/board.o

all: 	
	
	gcc -Wall -Werror -o main src/main.c
	gcc -Wall -Werror -o bin/move src/move.c
	gcc -Wall -Werror -o bin/board src/board.c

build:
	mkdir build
bin:
	mkdir bin 
clean:
	-rm -rf build bin
