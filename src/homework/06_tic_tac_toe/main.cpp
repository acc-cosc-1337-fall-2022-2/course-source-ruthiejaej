#include "tic_tac_toe.h"
#include <string>

int main() 
{
 tic_tac_toe game;
    string first_player;
    int position;
    string play_again;
    do 
	{
    cout << "Which player are you";
    cin >> first_player;
    game.start_game(first_player);
    while (!game.game_over())
	 {
        game.display_board();
        cin >> position;
        game.mark_board(position - 1);
        }
        cout << "Play again? Winning is futile. (Y/N)\n";
        cin >> play_again;
    }
    while (play_again == "Y");
	return 0;
}	