#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <iostream>

class Board {
protected:
	Square squares[40];

public:
	Board();
	~Board();
	void notify();
	void printBoard();


};


#endif

