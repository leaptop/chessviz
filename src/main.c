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
	printf("Pered vamii - shahmatnaya doska:\n");
	boardGeneration(a);
	boardRenew(a);
	char str[80]; 
	int k =0;
	while(k<1000) {
	scanf("%s", str);
	P_move(str, a);
	boardRenew (a);
	k++;
	}
	
	return 0;
	
}
