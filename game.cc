#include "game.h"

#include <iostream>
using namespace std;



Game::Game (Controller *Controller): controller(controller) {
	
}

void Game::addPlayer(int index, string name, char symbol, int curpos, int networth, int cash) {
	Player * p = new Player(name, symbol, curpos, networth, cash);
	players[index] = p;
	++numPlayer;
}


Game::~Game() {
	delete [] players;
	delete [] cells;
}