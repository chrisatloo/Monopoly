#ifndef PROPERTIES_H
#define PROPERTIES_H



#include <iostream>
#include <string>

#include "cell.h"


class Properties : public Cell
{
public:
	Properties(std::string, int cost);
	~Properties();

	int getCost();

	std::string getName();
	virtual int getFee() = 0; 

// fields
	std::string name;
	int cost;
};


#endif