#include<stdio.h>
int main() {
  int i, j;
  printf("Pered vamii - shahmatnaya doska:\n");
  for (i=0; i<=7; i++){ //* izmenenie stolbcov
    for (j=0; j<=7; j++) { //* izmenenie strok
      if(i%2==1) 
        if (j%2==1) printf("  ");
        else printf("*");
      else 
        if (j%2==1) printf("*");
        else printf("  ");
    }
  printf("\n");
  }
}
