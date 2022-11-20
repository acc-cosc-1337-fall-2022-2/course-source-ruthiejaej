#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Test T.T.T Manager get winner")
{

	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
	unique_ptr<tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	tic_tac_toe_manager manager;
	
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	REQUIRE(game->game_over()==true);
	manager.save_game(game);


	game1->start_game("X");

	game1->mark_board(3);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(1);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(6);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(2);
	REQUIRE(game1->game_over()==false);
	game1->mark_board(9);

	REQUIRE(game1->game_over()==true);
	manager.save_game(game1);

	game->start_game("O");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	REQUIRE(game->game_over()==true);
	manager.save_game(game);

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	unique_ptr<tic_tac_toe> game2 = make_unique<tic_tac_toe_3>();

	game2->start_game("O");

	game2->mark_board(1);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(4);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(5);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(3);
	REQUIRE(game2->game_over()==false);
	game2->mark_board(9);

	REQUIRE(game2->game_over()==true);
	manager.save_game(game2);

	unique_ptr<tic_tac_toe> game3 = make_unique<tic_tac_toe_3>();

	game3->start_game("X");

	game3->mark_board(1);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(2);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(3);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(4);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(5);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(7);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(6);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(9);
	REQUIRE(game3->game_over()==false);
	game3->mark_board(8);


	REQUIRE(game->game_over()==true);
	manager.save_game(game);
	REQUIRE(game3->game_over()==true);
	manager.save_game(game3);
	int x = 0;
	int o = 0;
	int t = 0;

	REQUIRE(o==1);
	REQUIRE(t==1);
}

TEST_CASE("Test first column winner for TT4")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
}



TEST_CASE("Test bottom left diagonal winner 4")

{
	//unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();
	
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}