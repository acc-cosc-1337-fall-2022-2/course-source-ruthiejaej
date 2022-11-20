//cpp

#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;



void tic_tac_toe_manager::get_winner_total(int& x, int& o, int& t)
{
    x = X_win;
    o = O_win;
    t = Tie;
}

void tic_tac_toe_manager::save_game(unique_ptr<tic_tac_toe>& b)
{
    //string winner = b->get_winner();
    update_winner_count(b->get_winner());
    game.push_back(std::move(b));
}

ostream& operator << (ostream& out, const tic_tac_toe_manager& manager)
{
    for (int i = 0; i < manager.game.size(); i++)
    {
        auto& game = manager.game[i];
        out << "Game " << i+1 << "\n" << *game << "\n";
    }

  //  cout << "X Wins: " << manager.X_win << '\n';
    //cout << "O Wins: " << manager.O_win << '\n';
    //cout << "Tie: " << manager.Tie << '\n';

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