//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"
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
vector<tic_tac_toe> get_game();
//friend operator<<(ostreams&, tic_tac_toe_manager&):ostream&
friend ostream& operator<<(ostream& out, const tic_tac_toe_manager& manager);
void get_winner_total(int& o, int& w, int& t);
tic_tac_toe_manager() = default;
tic_tac_toe_manager(tic_tac_toe_data& d);
~tic_tac_toe_manager();


private:
vector<unique_ptr<tic_tac_toe>> game;
int X_win = 0;
int O_win = 0;
int Tie = 0;
void update_winner_count(string winner);
tic_tac_toe_data data;
};


#endif