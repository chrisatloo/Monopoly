#include "cell.h"


using namespace std;

Cell::Cell() {};

Cell::Cell(string player, int impr = 0):
	player(player), impr(impr) {};


string Cell::getPlayer() {
	return player;
}

string Cell::addPlayer(char sym) {
	player += sym;
	return player;
}

string Cell::removePlayer(char sym) {
	int pos = player.find(sym);
	if (pos != string::npos) player.erase(pos, 1);
	return player;
}


int Cell::getImpr() {
	return impr;
}

Cell::~Cell() {}

/*
void removeCharsFromString( string &str, char *charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
   }
}



int getIndex() {
	return index;
}
*/

