#include <stdio.h>
#include <ncurses.h>//for _getch()
#include <stdlib.h>
#include "board.c"
#include "move.c"

int main() {
        int i = 0; 
	char **a;
	a=(char  **)malloc(9*sizeof(char *)); 
	 for (i=8; i>=1; i--){
	 a[i]=(char *)malloc(9*sizeof(char));
	 }
	boardGeneration(a);
	char str[80]; 
	//str = {"e2e4"};
	//for (int i = 0; i<4; i++){str[i] =_getch();}
	int k =0;
	
	//while(_getch()!=0){str[k] = _getch();k++;}
	for (i = 0; i<4; i++){
	printf("%c", str[i]);
	printf("\n");
	}
	while(k<1000) {
	scanf("%s", str);
	P_move(str, a);
	boardRenew (a);
	k++;
	}
	
	return 0;
	
}
