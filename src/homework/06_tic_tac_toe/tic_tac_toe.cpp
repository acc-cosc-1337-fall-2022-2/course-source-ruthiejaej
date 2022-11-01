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
    for(int i = 0; i < pegs.size(); i++){
        if(pegs[i] == " ") {
            return false;
        }
    }
    return true;
}

void tic_tac_toe::clear_board()
{
for (int i = 0; i < 9; i++)
{
    
    pegs[i]= " ";
    
} 
   player = "X"; 
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
    if (pegs[position - 1] == " ") {
        pegs[position - 1] = player;
    
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
    
     

