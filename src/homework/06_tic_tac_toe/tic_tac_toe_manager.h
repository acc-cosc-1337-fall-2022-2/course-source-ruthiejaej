//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <iostream>
#include <string>
using std::string;




class tic_tac_toe_manager {

friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe_manager& manager);

public:
void save_game(tic_tac_toe b);
//std::vector<tic_tac_toe> get_game();
void get_winner_total(int& o, int& w, int& t);

private:
std::vector<tic_tac_toe> game;
int X_win = 0;
int O_win = 0;
int Tie = 0;
void update_winner_count(std::string winner);

};


#endif