//cpp

#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
using std::string;



void tic_tac_toe_manager::get_winner_total(int& x, int& o, int& t)
{
    x = X_win;
    o = O_win;
    t = Tie;
}

void tic_tac_toe_manager::save_game(tic_tac_toe b)
{
    game.push_back(b);
    string winner = b.get_winner();
    update_winner_count(winner);
}

ostream& operator << (ostream& out, const tic_tac_toe_manager& manager)
{
    for (int i = 0; i < manager.game.size(); i++)
    {
        out << manager.game[i] << '\n';
    }

    cout << "X Wins: " << manager.X_win << '\n';
    cout << "O Wins: " << manager.O_win << '\n';
    cout << "Tie: " << manager.Tie << '\n';

    return out;
}

void tic_tac_toe_manager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        X_win += 1;
    }
    else if (winner == "O")
    {
        O_win += 1;
    }
    else
    {
        Tie += 1;
    }
}