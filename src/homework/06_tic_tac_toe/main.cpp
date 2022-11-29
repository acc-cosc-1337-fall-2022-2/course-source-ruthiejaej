#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
using std::unique_ptr;
using std::make_unique;
using std::cin;
using std::vector;

//unique_ptr<tic_tac_toe> game;
//tic_tac_toe_manager manager;

int main() 
{	
	unique_ptr<tic_tac_toe> game;
	tic_tac_toe_data data;
	string starting_player;
	bool loop_again;
	tic_tac_toe_manager manager(data);
	int size;
	int X_wins;
	int O_wins;
	int Tie;

	do {
		do {
			cout << "Do you want to play with a board of size 3 or 4 (enter 3 or 4): ";
			cin >> size;
			
			if (size == 3) {
				vector<string> board(9, " ");
				game = make_unique <tic_tac_toe_3>(board, "");
			} else if (size == 4) {
				vector<string> board(16, " ");
				game = make_unique <tic_tac_toe_4>(board, "");
			} else {
				cout << "Invalid size" << "\n";
			}

		} while(size != 3 && size != 4);


		cout << "Enter X or O:(uppercase format only) ";
		cin >> starting_player;

		while (starting_player != "X" && starting_player != "O") {
			cout << "Try again? (uppercase format only)" << "\n";
			cout << "Enter X or O: (uppercase format only) ";
			cin >> starting_player;
		}

		game->start_game(starting_player);

		do {
			cout << *game;
			cin >> *game;

		} while(game->game_over() == false);
		cout << *game;

		cout << "The winner is " << game->get_winner() << "\n";
		manager.save_game(game);
		manager.get_winner_total(O_wins, X_wins, Tie);
		cout << "X has won " << X_wins << " times O has won " << O_wins << " times and  " << Tie << " ties" << "\n";

		cout << "Want to play again? Winning is futile! (1 for yes 0 for no): ";
		cin >> loop_again;

	} while (loop_again);

	cout << "\n" << "ALL GAMES PLAYED " << "\n";
	cout << manager;

	return 0;
} 



    
    
   
	