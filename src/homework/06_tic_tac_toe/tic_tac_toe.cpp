//cpp
#include "tic_tac_toe.h"
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
using std::string;
using std::vector;
using std::cout;
using std::cin;
/*
tic_tac_toe() {
int length = size * 2;
for (int i = 0; i < length; i++)
    {
        
        pegs.push_back(" ");
        
    } 
        
}*/

void tic_tac_toe::set_next_player()
{
 if (player == "X")
    player = "O";
 else 
    player = "X";
}

bool tic_tac_toe::check_board_full()
{
    for(int i = 0; i < pegs.size(); i++){
        if(pegs[i] == " ") {
            return false;
        }
    }
    return true;
}

void tic_tac_toe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        
        pegs[i]= " ";
        
    } 
}

bool tic_tac_toe::game_over()
{
if (check_column_win())
{
    set_winner();
    return true;
}
if (check_row_win())
{
    set_winner();
    return true;
}
if (check_diagonal_win())
{
    set_winner();
    return true;
}
if (check_board_full())
{
    return true;
}
return false;
}

void tic_tac_toe::start_game(string first_player)
{
    clear_board();
    if (first_player == "X" || first_player == "O")
        player = first_player;
}

void tic_tac_toe::mark_board(int position)
{
    if (pegs[position] == " ") {
        pegs[position] = player;
    
        set_next_player();
    }
}

string tic_tac_toe::get_player() const
{
return player;
}

void tic_tac_toe::display_board() const
{
    cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << endl; 
    cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << endl;
    cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << endl;
}
    
bool tic_tac_toe::check_column_win() {

    // X
    if (pegs[0] == "X" &&
        pegs[3] == "X" &&
        pegs[6] == "X"){
            return true;
        }

    if (pegs[1] == "X" &&
        pegs[4] == "X" &&
        pegs[7] == "X"){
            return true;
        }

    if (pegs[2] == "X" &&
        pegs[5] == "X" &&
        pegs[8] == "X"){
            return true;
        }
    // o
    if (pegs[0] == "O" &&
        pegs[3] == "O" &&
        pegs[6] == "O"){
            return true;
        }

    if (pegs[1] == "O" &&
        pegs[4] == "O" &&
        pegs[7] == "O"){
            return true;
        }

    if (pegs[2] == "O" &&
        pegs[5] == "O" &&
        pegs[8] == "O"){
            return true;
        }

    return false;

}

bool tic_tac_toe::check_row_win() {
// X
    if (pegs[0] == "X" &&
        pegs[1] == "X" &&
        pegs[2] == "X"){
            return true;
        }

    if (pegs[3] == "X" &&
        pegs[4] == "X" &&
        pegs[5] == "X"){
            return true;
        }

    if (pegs[6] == "X" &&
        pegs[7] == "X" &&
        pegs[8] == "X"){
            return true;
        }
    // o
    if (pegs[0] == "O" &&
        pegs[1] == "O" &&
        pegs[2] == "O"){
            return true;
        }

    if (pegs[3] == "O" &&
        pegs[4] == "O" &&
        pegs[5] == "O"){
            return true;
        }

    if (pegs[6] == "O" &&
        pegs[7] == "O" &&
        pegs[8] == "O"){
            return true;
        }

    return false;

}

bool tic_tac_toe::check_diagonal_win() {
if (pegs[0] == "X" &&
    pegs[4] == "X" &&
    pegs[8] == "X"){
    
        return true;}

if (pegs[0] == "O" &&
    pegs[4] == "O" &&
    pegs[8] == "O"){
        return true;
    
    }
if (pegs[2] == "X" &&
    pegs[4] == "X" &&
    pegs[6] == "X"){
        return true;
    }
if (pegs[2] == "O" &&
    pegs[4] == "O" &&
    pegs[6] == "O"){
        return true;
    }

    return false;}


void tic_tac_toe::set_winner() {
    if (player == "X")
    {
        winner = "O";
    }
    else {
        winner = "X";
    }

}

string tic_tac_toe::get_winner() {
return winner;
}
ostream& operator<<(ostream& out, const tic_tac_toe& game)
{
    string output = "";

    if (game.pegs.size() == 9) {
        output =("\033[4m" + game.pegs.at(0) + "|" + game.pegs.at(1) + "|" + game.pegs.at(2) + "\n" +
                             game.pegs.at(3) + "|" + game.pegs.at(4) + "|" + game.pegs.at(5) + "\033[0m" + "\n" + 
                             game.pegs.at(6) + "|" + game.pegs.at(7) + "|" + game.pegs.at(8) + "\n");
    } else if (game.pegs.size() == 16) {
        output =("\033[4m" + game.pegs.at(0) + "|" + game.pegs.at(1) + "|" + game.pegs.at(2) + "|"  + game.pegs.at(3) + "\n" +
                             game.pegs.at(4) + "|" + game.pegs.at(5) + "|" + game.pegs.at(6) + "|"  + game.pegs.at(7) + "\n" +
                             game.pegs.at(8) + "|" + game.pegs.at(9) + "|" + game.pegs.at(10) + "|"  + game.pegs.at(11) + "\033[0m" + "\n" + 
                             game.pegs.at(12) + "|" + game.pegs.at(13) + "|" + game.pegs.at(14) + "|"  + game.pegs.at(15) + "\n");
    }
    out << output;

    return out;
   
}
istream& operator>>(istream& in, tic_tac_toe& game)
{
    int position;

    cout << "Player " << game.get_player() << ", select a position 1-9";
    cin >> position;
    game.mark_board(position);

    return in;
}

