/* MVC model - board: in charge of displaying the board 
 */

#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "cell.h"


struct Board {

	Cell cells[40]; // ptr to array of ptr to cell


	Board();
	~Board();
	//int rollDice(); 
	void notify();
	std::string printImpr(int);
	void printBoard();


};


#endif

