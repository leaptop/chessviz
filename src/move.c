#ifndef H_MOVE
#define H_MOVE

#include "headers.h"

void parseCommand(char str[], int *x, int *y, int *z, int *k){
	
	switch(str[0]){
		case 'a': *x = 1;break;//decart coordinates of the beginning and of the finishing spot
		case 'b': *x = 2;break;
		case 'c': *x = 3;break;
		case 'd': *x = 4;break;
		case 'e': *x = 5;break;
		case 'f': *x = 6;break;
		case 'g': *x = 7;break;
		case 'h': *x = 8;break;
	}
	switch(str[1]){
		case '1': *y = 1;break;
		case '2': *y = 2;break;
		case '3': *y = 3;break;
		case '4': *y = 4;break;
		case '5': *y = 5;break;
		case '6': *y = 6;break;
		case '7': *y = 7;break;
		case '8': *y = 8;break;
	}
	switch(str[2]){
		case 'a': *z = 1;break;
		case 'b': *z = 2;break;
		case 'c': *z = 3;break;
		case 'd': *z = 4;break;
		case 'e': *z = 5;break;
		case 'f': *z = 6;break;
		case 'g': *z = 7;break;
		case 'h': *z = 8;break;
	}
	switch(str[3]){
		case '1': *k = 1;break;
		case '2': *k = 2;break;
		case '3': *k = 3;break;
		case '4': *k = 4;break;
		case '5': *k = 5;break;
		case '6': *k = 6;break;
		case '7': *k = 7;break;
		case '8': *k = 8;break;
	}
}

void P_move(char **a, int x, int y, int z, int k) {	
	//Let's consider these coords as Decart for a while...
if(
	(x == z ) && (//if x doesn't change
			k == (y+1)//and y increases by 1 the lower P makes one step ahead
					||(y==2&&k==y+2)
			//or if x doesn't change and y0 = 2 and y1 = 4 the lower P makes it's first step in two sqares ahead
			||k==(y-1)//верхние делают шаг вперёд
					||(y==7&&k==y-2)//or(x still doesn't change) and y decreases by 2 the upper P makes it's first step in two squares ahead
			
		     )
			
  )
	
		{
		char temp = a[y][x];
		a[y][x] ='-';
		a[k][z] = temp;
		}
	else printf("\n Wrong insertion\n ");

	
}

#endif
