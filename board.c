#include<stdio.h>
int main() {
  int i, j;
  printf("Pered vamii - shahmatnaya doska:\n");
char **a;
  for (i=1; i<=8; i++){
	a[i] = new int[8];
	

    for (j=1; j<=8; j++) {
      if(i==2) a[i][j]='P';
	else if(i == 7) a[i][j]='p';
	else a[i][j] = ' ';
    }

  printf("\n");
  }
}

