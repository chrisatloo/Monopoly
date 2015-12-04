#ifndef GAME_H
#define GAME_H


#include "player.h"
#include "cell.h"
#include "controller.h"

class Controller;
class Game
{
public:
	 Game();
	 Game(Controller*);
	~ Game();

	void addPlayer(int, std::string, char, int, int, int);
	
//fields
	Controller *control;
	Player *players[8];
	Cell *cells[40];

};


#endif