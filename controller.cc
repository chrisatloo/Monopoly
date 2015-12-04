#include "controller.h"

#include <iostream>
#include <string>
using namespace std;


Controller::Controller() :
	board(NULL) {
	game = new Game();

}

void Controller::setNumPlayer(int num) {
	numPlayer = num;
}



void Controller::init() {

	Board* b = new Board();
	board = b;
	// welcoming line
	cout << "        _________________________________________" << endl;
	cout << "        |                                       |" << endl;
	cout << "        |  ###   ###   #####  ###   ###   ###   |" << endl;
	cout << "        |  #  #  #  #     #  #   # #   # #   #  |" << endl;
	cout << "        |  ####  ####    #   #   # #   # #   #  |" << endl;
	cout << "        |  #   # #   #  #    #   # #   # #   #  |" << endl;
	cout << "        |  ####  ####  #      ###   ###   ###   |" << endl;
	cout << "        |_______________________________________|" << endl;

	cout << endl << endl << "Enter 'help' for list of command to play with! (not wokring now)" << endl;;


	// init symbols
	symbols = new char[8];
	symbols[0] = 'G'; // "Goose"
	symbols[1] = 'B'; // "GRT BUS"
	symbols[2] = 'D'; // "Tim Hortons Doughnut"
	symbols[3] = 'P'; // "Professor"
	symbols[4] = 'S'; // "Student"
	symbols[5] = '$'; // "Money"
	symbols[6] = 'L'; // "Laptop"
	symbols[7] = 'T'; // "Pink tie"

	/*
	Player* p1;
	Player* p2;
	Player* p3;
	Player* p4;
	Player* p5;
	Player* p6;
	Player* p7;
	Player* p8;
	*/


	//starting, creating save file NOOOOOO
	/*
	string savedfile = "savedfile.txt";
	ofstream save;
	save.open(savedfile); */


	// input number of players
	cout << "How many players do we have here? (Please choose a number from 6 to 8)" << endl;

	char numPlayer_temp;
	while (cin >> numPlayer_temp ) {
		if ( numPlayer_temp <= '8' && numPlayer_temp >= '6') {
			numPlayer = numPlayer_temp - '0';
			break;
		} else {
			cout << "Please input a valid number from 6 to 8!" << endl;
		}
	}

#ifdef DEBUG
	cout << "Great! We have " << numPlayer << "on the table!" << endl; //testing
#endif
	cout << "Now let's choose a symbol for ourselves." << endl;

	// set player profiles
	string name_temp;
	char symbol_temp;
	for ( int i = 0; i < numPlayer; ++i) {

		// name
		cout << "Hi player" << (i + 1) << ", What is your name? " << endl;
		cin >> name_temp;

		// symbol: show option
		cout << "Okay, " << name_temp << " , what symbol would you like to use?" << endl;
		cout << "  ________________________________________________________________________________________" << endl;
		cout << "  |'G' for Goose     | 'B' for GRT BUS | 'D' for Tim Hortons Doughnut | 'L' for Laptop   |" << endl;
		cout << "  |------------------|-----------------|------------------------------|------------------|" << endl;
		cout << "  |'p' for Professor | 'S' for Student | '$' for Money                | 'T' for Pink Tie |" << endl;
		cout << "  |__________________|_________________|______________________________|__________________|" << endl;

		cout << endl << endl << "Please choose from following available symbols: ";

		// print available options
		for (int i = 0; i < 8; i++) {
			if (symbols[i] == NULL) continue;
			cout << symbols[i] << " | ";
		}
		cout << endl;

		// record symbol
		while ( cin >> symbol_temp) {
			bool symbolnotvalid = true;
			for ( int j = 0; j < 8; j++) {
				if (symbols[j] == symbol_temp) { // set chosen symbol to NULL
					symbols[j] = NULL;
					symbolnotvalid = false;
					break;
				}
			}

			if (symbolnotvalid) {
				cout << "Oops! Symbol not valid or is already taken!" << endl;
				continue;
			}

			// if doesn't exist in mapPlayer, create one
			if (mapPlayers.find(symbol_temp) == mapPlayers.end()) {
				mapPlayers[symbol_temp] = name_temp;
				break;
			}



		}

		// add player
		game->addPlayer(i, name_temp, symbol_temp, 0, 0, 1500);
		board->cells[0].addPlayer(symbol_temp);

#ifdef DEBUG
		cout << "Player " << (i + 1) << ", You are now " << symmbol_temp << endl;
#endif
	}

	board->printBoard();
//game->addCell()


}





Board* Controller::getBoard() {
	return board;
}

void Controller::help() {
	cout << "help - print a list of commands" << endl;
	cout << "roll - it's your turn! Let's ROLL" << endl;
	cout << "trade <name> <owner> <buyer> - trade some property for liquidation!" << endl;
	cout << "improve <property> - improve a property when you have monopoly" << endl;
	cout << "mortgage <property> - mortgage a property" << endl;
	cout << "unmortgage <property> - unmortgage a property" << endl;
	cout << "assets -  print stats about yourself" << endl;
	cout << "save <filename> - save the game to filename" << endl;

}





Controller::~Controller() {
	delete[] symbols;
	delete board;

}