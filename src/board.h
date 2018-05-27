#ifndef H_BOARD
#define H_BOARD

#include "headers.h"
void boardGeneration(char **a) ;

void boardRenew(char **a);

int checkCommand(char ch[]);

int checkFigure(char **a, int x, int y, int BlorWh);

#endif
