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
	{printf("\ncheckCommand() returns 1: Wrong command(length or letters or numbers). Enter again.\n");return 1;}
	else return 0;
}
int checkFigure(char **a, int x, int y){
printf("\n(x,y) = %d\n", a[y][x]);// x in a[x][y] is a number of string(y variable in math synthax), y in a[x][y] is a number of column(x variable in math syntax). Thus we should adress (x,y) dot in decart coordinates as a[y][x]. It's like a transposed matrix. 
	if(a[y][x] == 112 || a[y][x] == 80)//Pawn, rook, knight, bishop, queen, king
		return 1;	
	if(a[y][x] == 82 || a[y][x] == 114)//Rook
		return 2;
	if(a[y][x] == 78 || a[y][x] == 110)//kNight
		return 3;
	if(a[y][x] == 66 || a[y][x] == 98)//Bishop
		return 4;
	if(a[y][x] == 81 || a[y][x] == 113)//Queen
		return 5;
	if(a[y][x] == 107 || a[y][x] == 75)//King
		return 6;

	else {printf("checkFigure() returns 0: wrong figure"); return 0;}
}
#endif
