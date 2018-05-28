#define CTEST_MAIN
#include <ctest.h>
#include <move.h>
#include <board.h>



CTEST(checkCommand, Correct) {
    int result = checkCommand("e2e4");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(checkCommand, Incorrect) {
    int result = checkCommand("e2z5");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(CheckFigure, Correct) {

	int i;
	char **a;
    	a=(char  **)malloc(9*sizeof(char *)); 
	for (i=8; i>=1; i--){
		a[i]=(char *)malloc(9*sizeof(char));
	}
	boardGeneration(a);
    int result =  checkFigure(a, 5, 1, 1);
    int expected = 6;
    ASSERT_EQUAL(expected,result);
}

CTEST(CheckFigure, Incorrect) {

	int i;
	char **a;
    	a=(char  **)malloc(9*sizeof(char *)); 
	for (i=8; i>=1; i--){
		a[i]=(char *)malloc(9*sizeof(char));
	}
	boardGeneration(a);
    int result =  checkFigure(a, 5, 8, 0);
    int expected = 6;
    ASSERT_EQUAL(expected,result);
}

CTEST(boardGeneration, Correct) {
   int i;
	char **a;
    	a=(char  **)malloc(9*sizeof(char *)); 
	for (i=8; i>=1; i--){
		a[i]=(char *)malloc(9*sizeof(char));
	}
	boardGeneration(a);
	char result = a[1][6];
	char expected = 'B';
    ASSERT_EQUAL(expected,result);
}	

CTEST(boardGeneration, Incorrect) {
    int i;
	char **a;
    	a=(char  **)malloc(9*sizeof(char *)); 
	for (i=8; i>=1; i--){
		a[i]=(char *)malloc(9*sizeof(char));
	}
	boardGeneration(a);
	char result = a[1][7];
	char expected = 'N';
    ASSERT_EQUAL(expected,result);
}

void parseCommand(char str[], int *x, int *y, int *z, int *k);

CTEST(parseCommand, Correct) {
	int x, y, z, k;
   parseCommand("e2e4", &x, &y, &z, &k);
    	
	int result = x;
	int expected = 5;
    ASSERT_EQUAL(expected,result);
}


CTEST(parseCommand, Incorrect) {
	int x, y, z, k;
   parseCommand("e2e4", &x, &y, &z, &k);
    	
	int result = y;
	int expected = 2;
    ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv) {


    int test_res = ctest_main(argc, argv);
   // ClearBoard();
    return test_res;
}
