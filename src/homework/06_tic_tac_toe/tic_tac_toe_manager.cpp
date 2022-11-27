//cpp

#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::unique_ptr;
using std::move;



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
tic_tac_toe_manager::tic_tac_toe_manager(tic_tac_toe_data& d):data(d) {
    game = move(data.get_game());    
}

tic_tac_toe_manager::~tic_tac_toe_manager() {
    data.save_game(game);
}