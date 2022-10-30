//cpp
#include "tic_tac_toe.h"
#include <string>


void tic_tac_toe::set_next_player()
{
 if (player == "X")
    player = "O";
 else 
    player = "X";
}

bool tic_tac_toe::check_board_full()
{
    bool board_full;
    if ((pegs.begin(), pegs.end(), " "))
    {
        board_full = false;
    }
    else
    {
        board_full = true;
    }

    return board_full; 
}

void tic_tac_toe::clear_board()
{
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
    pegs[i][j] = 0;
    }
} 
    
}

bool tic_tac_toe::game_over()
{
return check_board_full();
}

void tic_tac_toe::start_game(string first_player)
{
//clear_board();
if (first_player == "X" || first_player == "O")
player = first_player;
}

void tic_tac_toe::mark_board(int position)
{
 pegs[position - 1] = player;
    set_next_player();
}

string tic_tac_toe::get_player() const
{
return player;
}

void tic_tac_toe::display_board() const
{
int size =3;    
     for (int row = 0; row < size; row++){        
        for (int column = 0; column < size; column++){       
            cout <<'\t'<< pegs[row][column];
    }
    cout << endl;
     }
}
