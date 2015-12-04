#include "properties.h"

#include <iostream>
using namespace std;

Properties::Properties(string name, int cost ) :
	name(name), cost(cost) {}


std::string Properties::getName() {
	return name;
}

/*
int Properties::getIndex() {
	return index;
}
*/

int Properties::getCost() {
	return cost;
}


Properties::~Properties() {}
