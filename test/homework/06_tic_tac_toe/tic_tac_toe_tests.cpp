#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game")
 {
   tic_tac_toe game;
   string first_player = "X";
   game.start_game(first_player);
   REQUIRE(game.game_over() == false);

   game.mark_board(1); // X
   game.mark_board(3); // O
   game.mark_board(4); // X
   game.mark_board(6); // O
   game.mark_board(7); // X

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "X");
    //for(int i = 0; i<9; i++)
    //{
      //  game.mark_board(i+1);

        //if(i != 9)
        //{REQUIRE(game.game_over() == false);}
        //else
         //      {REQUIRE(game.game_over() == true);}
    

//}

   game.mark_board(2); // X
   game.mark_board(1); // O
   game.mark_board(5); // X
   game.mark_board(3); // O
   game.mark_board(8); // X

   REQUIRE(game.game_over() == true);
   REQUIRE(game.get_winner() == "X");

   game.mark_board(3); // X
   game.mark_board(1); // O
   game.mark_board(6); // X
   game.mark_board(2); // O
   game.mark_board(9); // X

   REQUIRE(game.game_over() == true);
   REQUIRE(game.get_winner() == "X");

// O'S


}

TEST_CASE("Test game1")
 {
   tic_tac_toe game;
   string first_player = "O";
   game.start_game(first_player);
   REQUIRE(game.game_over() == false);

   game.mark_board(1); // O
   game.mark_board(4); // X
   game.mark_board(2); // O
   game.mark_board(5); // X
   game.mark_board(3); // O

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "O");

   game.mark_board(4); // O
   game.mark_board(2); // X
   game.mark_board(5); // O
   game.mark_board(3); // X
   game.mark_board(6); // O

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "O");
  
  
   game.mark_board(7); // O
   game.mark_board(6); // X
   game.mark_board(8); // O
   game.mark_board(5); // X
   game.mark_board(9); // O

  REQUIRE(game.game_over() == true);
  REQUIRE(game.get_winner() == "O");
 }
 