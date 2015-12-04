#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <sstream>
#include <map>

//#include "game.h"


class Player
{
public:
	// constructors and destructors
	Player(std::string, char, int, int , int);
	~Player();

	// getters and setters

	int getCash();
	int getNetworth();
	void setNetworth(int);
	std::string getName();
	void setName(std::string);
	void setBankrupcy(bool);
	void setSymbol(char);

	// other functions
	void addCash(int);
	void addNetworth(int);
	bool isBankrupted();


protected:
	std::string name;
	char symbol;
	bool bankrupcy;
	int curpos, networth, cash;
	std::map<std::string, std::string> properties;


};

#endif
