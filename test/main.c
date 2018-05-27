#define CTEST_MAIN

#include <move.h>
#include <board.h>

#include <ctest.h>

CTEST(Command, CorrectCommand) {
    int result = checkCommand("e2e4");
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Command, IncorrectCommand) {
    int result = checkCommand("e2z5");
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(CheckFigure, Correct) {

    int result =  checkFigure(char **a, int x, int y, int BlorWh);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(PawnMove, Incorrect) {
    int result = MakeMove("Pb2-b3",0,1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}
/*
CTEST(KnightMove, Correct) {
    int result = MakeMove("Nb1-a3",0,0);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(KnightMove, Incorrect) {
    int result = MakeMove("ng1-h3",0,0);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(BishopMove, Correct) {
    int result = MakeMove("Bc1-d2",0,0);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(BishopMove, Incorrect) {
    int result = MakeMove("Bg8-h7",0,0);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(QueenMove, Correct) {
    int result = MakeMove("Qd1-f3",0,0);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(QueenMove, Incorrect) {
    int result = MakeMove("Qd8-d7",0,0);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Castling, Correct) {
    int result = Castling(1,1);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

CTEST(Castling, Incorrect) {
    int result = Castling(0,0);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}
*/
int main(int argc, const char** argv) {
    //InitBoard();
    int test_res = ctest_main(argc, argv);
   // ClearBoard();
    return test_res;
}
