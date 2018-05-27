#include "headers.h"
#include "board.h"
#include "move.h"


int main() {
        int i = 0, BlorWh = 1; 
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
		if (BlorWh) printf("\nBig's turn\n"); else printf("\nSmall's turn\n");
		scanf("%s", str);
		if(str[0]==48) return 0;//if the insertion is 0, close the program
		int ckc = checkCommand(str);//0 - correct insertion, 1 - something is wrong
		//printf("ckc = %d, k = %d", ckc, k);	
		if(ckc)continue;//if (1(true)) goes to the beginning of the cycle(calls "continue"). Else (0)- just goes farther.
		int x, y, z, k;
		parseCommand(str, &x, &y, &z, &k);
		printf("\n x = %d, y = %d, z = %d, k = %d\n", x, y, z, k);
		int ckf = checkFigure(a, x, y, BlorWh);
			switch(ckf){
			case 0: continue;//Pawn, rook, knight, bishop, queen, king
			case 1: P_move(a, x, y, z, k, &BlorWh);break;
			case 2: R_move(a, x, y, z, k, &BlorWh);break;
			case 3: N_move(a, x, y, z, k, &BlorWh);break;
			case 4: B_move(a, x, y, z, k, &BlorWh);break;
			case 5: Q_move(a, x, y, z, k, &BlorWh);break;
			case 6: K_move(a, x, y, z, k, &BlorWh);break;
			}
		
		boardRenew (a);
		k++;
	}
	
	return 0;
	
}
