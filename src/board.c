#ifndef H_BOARD
#define H_BOARD

#include "headers.h"
void boardGeneration(char **a) {
		int i=0, j=0;
		for (i=8; i>=1; i--){
			for (j=1; j<=8; j++){
				if(i==2) a[i][j]='P';
				else if(i == 7) a[i][j]='p';
				else a[i][j] = '-';	
			}
		}
	a[1][1]='R';a[1][2]='N';a[1][3]='B';a[1][4]='Q';
	a[1][5]='K';a[1][6]='B';a[1][7]='N';a[1][8]='R';

	a[8][1]='r';a[8][2]='n';a[8][3]='b';a[8][4]='q';
	a[8][5]='k';a[8][6]='b';a[8][7]='n';a[8][8]='r';
}
void boardRenew(char **a){
	int i = 0, j = 0;
	for (i=8; i>=1; i--){
		printf("%d", i);
			for (j=1; j<=8; j++) 
				printf("%c", a[i][j]);
		printf("\n");
	}
	printf(" abcdefgh");
	printf("\n\n");
}
int checkCommand(char ch[]){//If the command's length is less or more than 4, or the letters or numbers are out of range => wrong command
	if(	strlen(ch)<4
		||ch[4]
		||ch[0]<97||ch[0]>104
		||ch[1]<49||ch[1]>56
		||ch[2]<97||ch[2]>104
		||ch[3]<49||ch[3]>56
	) 
	{printf("\nWrong command. Enter again.\n");return 1;}
	else return 0;
}
int checkFigure(char **a, int x, int y){
printf("\na[x][y] = %d\n", a[x][y]);// x in a[x][y] is a number of string(y variable in math synthax), y in a[x][y] is a number of column(x variable in math syntax). Thus we should adress (x,y) dot in decart coordinates as a[y][x]. 
	if(a[y][x] == 112 || a[x][y] == 80)//Pawn
		return 1;
	if(a[x][y] == 75 || a[x][y] == 107)//Knight
		return 2;
	else return 0;
}
#endif
