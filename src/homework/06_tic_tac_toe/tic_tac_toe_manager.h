//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <memory>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::ostream;
using std::istream;
using std::unique_ptr;



class tic_tac_toe_manager {



public:
void save_game(unique_ptr<tic_tac_toe>& b);
//std::vector<tic_tac_toe> get_game();
//friend operator<<(std::ostreams&, tic_tac_toe_manager&):std::ostream&
friend ostream& operator<<(ostream& out, const tic_tac_toe_manager& manager);
void get_winner_total(int& o, int& w, int& t);


private:
vector<unique_ptr<tic_tac_toe>> game;
int X_win = 0;
int O_win = 0;
int Tie = 0;
void update_winner_count(string winner);

};


#endif