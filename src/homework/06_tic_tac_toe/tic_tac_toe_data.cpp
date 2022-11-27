//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <vector>
#include <memory>
#include <fstream>
#include <string>

using std::vector;
using std::unique_ptr;
using std::ofstream;
using std::ifstream;
using std::string;

void tic_tac_toe_data::save_game(const vector<unique_ptr<tic_tac_toe>>& game)  {
    ofstream saved_game;
    saved_game.open(file_name);

    
    for(auto i = 0; i < game.size(); i++ ) {

        
        for(auto j = 0; j < game.at(i)-> tic_tac_toe::get_pegs().size(); j++ ) {
            
            saved_game << game.at(i)-> tic_tac_toe::get_pegs().at(j); 

        }
        saved_game << game.at(i)->get_winner();
        saved_game << "\n";
    }
    saved_game.close();
}

vector<unique_ptr<tic_tac_toe>> tic_tac_toe_data::get_game() {
    vector<unique_ptr<tic_tac_toe>> boards;
    ifstream file;
    string line;
    string winner;
    //get_pegs;
    file.open(file_name);

    if(file.is_open()) {
        
        while(getline(file, line)) {
            
            vector<string> pegs;

            for (int ch = 0; ch < (line.length()-1); ch++) {
                string peg =  std::string(1,line.at(ch));
                pegs.push_back(peg);
            }

            winner = std::string(1,line.at(line.length()-1));
            unique_ptr<tic_tac_toe> game;
 
            
            if (pegs.size() == 9) {
				game = make_unique <tic_tac_toe_3>(move(pegs), winner);
			} else if (pegs.size() == 16){
				game = std::make_unique <tic_tac_toe_4>(move(pegs), winner);
            }  

            boards.push_back(move(game));
            
        }
        
        
    }
    
    file.close();
    return boards;
}