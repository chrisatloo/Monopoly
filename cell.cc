#include <string>
#include <iostream>
using namespace std;

Cell::Cell(string name, int index, int impr = 0):
	name(name), index(index), impr(impr) {};

string Cell::getPlayer(int cell) {
	return player;
}

string Cell::addPlayer(char sym) {
	player += sym;
	return player;
}


int getIndex() {
	return index;
}

int getImpr() {
	return impr;
}


