#ifndef CELL_H
#define CELL_H

#include <string>
#include <iostream>

class Cell
{
public:
	// constructor and destructor ( pure virtual )
	Cell();
	virtual ~Cell() = 0;

	// getters
	std::string getPlayer(int);
	int getIndex();
	int getImpr();

	// modify string player and setters
	std::string addPlayer(char);
	std::string removePlayer(char);

	// conditionals 


	// other helper functions
	void removeCharsFromString( std::string &, char*);

protected:
	std::string player;
	int impr, index;	
};


#endif