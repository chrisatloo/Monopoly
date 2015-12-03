#include <string>
#include <iostream>
using namespace std;

Cell::Cell(string player, int index, int impr = 0):
	player(player), index(index), impr(impr) {};

string Cell::getPlayer(int cell) {
	return player;
}

string Cell::addPlayer(char sym) {
	player += sym;
	return player;
}

string Cell::removePlayer(char sym) {
	removeCharsFromString(player, sym);
	return player;
}

void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
   }
}


int getIndex() {
	return index;
}

int getImpr() {
	return impr;
}


