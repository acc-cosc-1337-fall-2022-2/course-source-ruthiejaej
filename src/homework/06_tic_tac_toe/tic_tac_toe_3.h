//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <iostream>
#include <memory>
using namespace std;

class tic_tac_toe_3 : public tic_tac_toe {
   
private:
        bool check_column_win();
        bool check_diagonal_win();
        bool check_row_win();
   
public:
        //unique_pointer<tic_tac_toe> game1= make_unique<tic_tac_toe_3>()
        tic_tac_toe_3():tic_tac_toe(3){}
};

#endif