#ifndef CELL_H
#define CELL_H

#include <string>
#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>

//class Game;
class Cell
{
public:
	// constructor and destructor 
	Cell();
	Cell(std::string, int);
	virtual ~Cell();

	// getters
	std::string getPlayer();
	//int getIndex();
	int getImpr();

	// modify string player and setters
	std::string addPlayer(char);
	std::string removePlayer(char);

	// conditionals 


	// other helper functions
	//void removeCharsFromString( std::string &, char*);

// fields
	std::string player;
	int index, impr;	

};


#endif