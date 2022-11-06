#include "tic_tac_toe.h"
#include <string>

int main() 
{
    tic_tac_toe game;
    string first_player;
    int position;
    string start_game;
    do 
	{
        cout << "Which player are you? (X/O): ";
        cin >> first_player;
        game.start_game(first_player);
    

        while (!game.game_over())
	    {
            game.display_board();

            cout << "Enter position 1-9:";
            cin >> position;

            game.mark_board(position - 1);
        
        
        }



        cout << game.get_winner() << " WINS!" << endl;


        cout << "Play again? Winning is futile. (Y/N): ";
        cin >> start_game;
    }
    while (start_game == "Y");
	return false;
}	