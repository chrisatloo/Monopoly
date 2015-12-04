#include "game.h"

#include <iostream>
using namespace std;


Game::Game () { 
	control = NULL;
}

Game::Game (Controller *c): control(c) {
	
}

void Game::addPlayer(int index, string name, char symbol, int curpos, int networth, int cash) {
	Player * p = new Player(name, symbol, curpos, networth, cash);
	players[index] = p;
	//control->setNumPlayer(index);
}


Game::~Game() {
	delete [] players;
	delete [] cells;
	delete control;
}