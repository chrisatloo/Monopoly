#ifndef GAME_H
#define GAME_H

class Controller;
class Game
{
public:
	 Game();
	 Game(Controller*);
	~ Game();
	
//fields
	Controller *controller;
	Player *players[8];
	Cell *cell[40];

};


#endif