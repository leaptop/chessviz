#include "headers.h"
#include "board.h"
#include "move.h"


int main() {
        int i = 0; 
	char **a;
	a=(char  **)malloc(9*sizeof(char *)); 
	for (i=8; i>=1; i--){
		a[i]=(char *)malloc(9*sizeof(char));
	}
	printf("Pered vamii - shahmatnaya doska:\n Enter 0 for exit\n or make a move like e2e4\n");
	boardGeneration(a);
	boardRenew(a);
	char str[80]; 
	int k =0;
	while(k<1000) {
	A:	scanf("%s", str);
		if(str[0]==48) return 0;//if the insertion is 0, close the program
		int ckc = checkCommand(str);	
		if(ckc)continue; else goto A;
		int x, y, z, k;
		parseCommand(str, &x, &y, &z, &k);
		printf("\n x = %d, y = %d, z = %d, k = %d\n", x, y, z, k);
		int ckf = checkFigure(a, x, y);
		printf("\n ckf = %d\n", ckf);
		switch(ckf){
		case 0: goto A; break;//Pawn, rook, knight, bishop, queen, king
		case 1: P_move(a, x, y, z, k);break;
		case 2: R_move(a, x, y, z, k);break;
		case 3: N_move(a, x, y, z, k);break;
		case 4: B_move(a, x, y, z, k);break;
		case 5: Q_move(a, x, y, z, k);break;
		case 6: K_move(a, x, y, z, k);break;
		}
	
	boardRenew (a);
	k++;
	}
	
	return 0;
	
}
