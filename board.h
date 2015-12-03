/* MVC model - board: in charge of displaying the board 
 */

#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <iostream>

#include "cell.h"

class Board {
protected:
	Cell cells[40];

public:
	Board();
	~Board();
	void notify();
	void printBoard();


};


#endif

