all: 	
	
	gcc -Wall -Werror -o main src/main.c
	gcc -Wall -Werror -o bin/move src/move.c
	gcc -Wall -Werror -o bin/board src/board.c
