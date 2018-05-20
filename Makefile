CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = main.o build/move.o build/board.o

build:
	mkdir build
	mkdir bin 
	
all: 	
	
	gcc -Wall -Werror -o main src/main.c
	gcc -Wall -Werror -o bin/move src/move.c
	gcc -Wall -Werror -o bin/board src/board.c


clean:
	-rm -rf build bin

