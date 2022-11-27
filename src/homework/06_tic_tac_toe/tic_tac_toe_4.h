//h
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include "tic_tac_toe.h"
using namespace std;

class tic_tac_toe_4 : public tic_tac_toe {
   
private:
bool check_column_win();
bool check_diagonal_win();
bool check_row_win();
   
public:
    tic_tac_toe_4();//:tic_tac_toe_4(4){}
    tic_tac_toe_4(vector<string> p, string winner) : tic_tac_toe(4, p, winner){}
};

#endif