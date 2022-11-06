//h
#ifndef TIC_TAC_TOR_H
#define TIC_TAC_TOR_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class tic_tac_toe
{
    string player = "X";
    string winner;
    vector<string> pegs = 
    {
     " "," "," ",
     " "," "," ", 
     " "," "," "
    };

    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner();

};

#endif