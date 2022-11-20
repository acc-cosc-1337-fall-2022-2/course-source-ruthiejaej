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

unique_ptr<tic_tac_toe> game;
tic_tac_toe_manager manager;

int main() 
{

    string first_player;
    int position;
    int select = 0;

    while (select == 0)
    {
        string game_choice = "";
        do
        {
            cout << "Would you like to play 3 in a row or 4 in a row? Pick either 3 or 4 :\n";
            cin >> game_choice;
        }
        while(game_choice == "3" &&game_choice == "4");

        if (game_choice == "3")
        {
            game = make_unique<tic_tac_toe_3>();
            game = make_unique <tic_tac_toe_4>();
        }
        {
            return true;
        }
        if (game_choice == "4")
        {
          game = make_unique<tic_tac_toe_4>(); 
          cin>>game_choice;
        }
        {
            return true;
        }
    

        cout << " Choose X or O\n";
        cin >> first_player;

        if (first_player == "X" || first_player == "O")
        {
            game->start_game(first_player);

            do
            {
                cout << *game;
                cin >> *game;
            }
            while (!game->game_over());

            manager.save_game(game);

            int x, o, t;
            manager.get_winner_total(x,o,t);
            cout << "\nX Wins: " << x << "\n";
            cout << "O Wins: " << o << "\n";
            cout << "Tie: " << t << "\n";

            cout << "Play again? Winning is futile! \n";
            cin >> select;
        }
        else
        {
            cout << "Invalid \n";
        }
    }
    while (select != 0)
    {
        cout<<"Goodbye"<<"\n\n";
        break;
    }
    cout<<manager;
	return 0;
} 

    
    
   
	