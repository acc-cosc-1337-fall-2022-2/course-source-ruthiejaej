//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include <iostream>
//#include <ostream>
using namespace std;
using std::vector;


class tic_tac_toe
{
    string player = "X";
    string winner;
   /* vector<string> get_pegs; 
   {
    " "," "," ",
    " "," "," ", 
    " "," "," "
   };*/

    void set_next_player();
    bool check_board_full();
    void clear_board();
   // bool check_column_win();
   // bool check_row_win();
   // bool check_diagonal_win();
    void set_winner();

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner();
    tic_tac_toe (int board_size, vector<string> b, string win):pegs(b) {
    winner = win;
    }
    vector<string> get_pegs() const;
    friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game);
    friend std::istream& operator>>(std::istream& in, tic_tac_toe& game);
};

#endif