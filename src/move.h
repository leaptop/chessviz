#ifndef H_MOVE
#define H_MOVE

void P_move(char **a, int x, int y, int z, int k, int *BlorWh);

void parseCommand(char str[], int *x, int *y, int *z, int *k);
	
void R_move(char **a, int x, int y, int z, int k, int *BlorWh);

void N_move(char **a, int x, int y, int z, int k, int *BlorWh);

void B_move(char **a, int x, int y, int z, int k, int *BlorWh);

void Q_move(char **a, int x, int y, int z, int k, int *BlorWh);

void K_move(char **a, int x, int y, int z, int k, int *BlorWh);
#endif
