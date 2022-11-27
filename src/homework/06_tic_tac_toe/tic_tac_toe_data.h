//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

    #include "tic_tac_toe.h"
    #include <vector>
    #include <memory>
    #include <string>

    class tic_tac_toe_data {

        public:
            void save_game(const vector<unique_ptr<tic_tac_toe>>& game);
            vector<unique_ptr<tic_tac_toe>> get_game();
            
        private:
            string file_name = "savedgame.dat";

    };

#endif