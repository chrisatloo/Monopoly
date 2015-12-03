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

class Controller
{
public:
	Controller();
	~Controller();
	void init();
	Board *getBoard(); //for display board

	// other helper functions 
	void help(); 


private:
	Board* board;
	map<char, string> mapPlayers;
	int numPlayer;

	
	//std::string savedfile;
};


#endif