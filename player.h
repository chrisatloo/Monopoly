#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <sstream>
#include <map>


class Player
{
public:
	// constructors and destructors
	Player();
	~Player();

	// getters and setters

	int getCash();
	int getNetworth();
	void setNetworth(int);
	std::string getName();
	void setName();
	void setBankrupcy(bool);
	void setSymbol(char)

	// other functions
	void addCash(int);
	void addNetworth(int);
	bool isBankrupted();

protected:
	string name;
	char symbol;
	bool bankrupcy;
	int curpos, networth, cash;
	std::map<std::string> properties;


};

#endif
