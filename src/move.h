#ifndef H_MOVE
#define H_MOVE

void P_move(char **a, int x, int y, int z, int k);

void parseCommand(char str[], int *x, int *y, int *z, int *k);
	
void R_move(char **a, int x, int y, int z, int k);

void N_move(char **a, int x, int y, int z, int k);

void B_move(char **a, int x, int y, int z, int k);

void Q_move(char **a, int x, int y, int z, int k);

void K_move(char **a, int x, int y, int z, int k);
#endif
