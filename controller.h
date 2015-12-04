/* MVC model - controller 
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <map>
#include <string>
#include <iostream>
#include <fstream>

#include "board.h"
#include "dice.h"
#include "cell.h"
#include "game.h"

class Game;
class Controller
{
public:
	Controller();
	~Controller();
	void setNumPlayer(int);
	void init();
	Board *getBoard(); //for display board

	// other helper functions 
	void help(); 


private:
	Board* board;
	Game* game;
	std::map<char, std::string> mapPlayers;
	int numPlayer;
	char *symbols;

	
	//std::string savedfile;
};


#endif