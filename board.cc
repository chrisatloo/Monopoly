#include "board.h"

#include <iostream>
#include <string>


Board::Board() {

}

Board::~Board() {
	delete [] cells;
}

Board::rollDice() {
	int num1 = Dice::rollDice();
	int num2 = Dice::rollDice();
	cout << "You rolled a " << num1 << "and a " << num2;
	cout << "! That is " << num1 + num2 << "in total!" endl;
	return num1 + num2; 
}

void Board::printImpr(int impr) {
	// print Improvement level using cout
	if ( impr == 1 ) {
		return "*";
	} else if ( impr == 2) {
		return "* * ";
	} else if ( impr == 3) {
		return "* * * ";
	} else if ( impr == 4) {
		return "* * * *";
	} else if ( impr == 5) {
		return "WAP";
	} else {
		return "";
	}
}


void Board::printBoard() {
	// top cells
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "|Goose   |        |NEEDLES |        |        |V1      |        |        |CIF     |        |GO TO   |" << endl;
	cout << "|Nesting |--------|HALL    |--------|--------|        |--------|--------|        |--------|TIMS    |" << endl;
	cout << "|        |EV1     |        |EV2     |EV3     |        |PHYS    |B1      |        |B2      |        |" << endl;
	for ( int i = 20; i < 31; ++i) { // for loop to print improvement on buildings
		cout << "|" << setw(8) << printImpr(cells[i].getImpr());
	}
	cout << "|" << endl;
	for ( int i = 20; i < 31; ++i) { // for loop to print players
		cout << "|" << setw(8) << cells[i].getPlayer();
	}
	cout << "|" << endl;
	for ( int i = 20; i < 31; ++i) { cout << "|        ";}
	cout << "|" << endl;

	// roll 2 cells
	cout << "|        |" << setw(70) << " " << "|        |" << endl;
	cout << "|--------|" << setw(70) << " " << "|--------|" << endl;
	cout << "|OPT     |" << setw(70) << " " << "|EIT     |" << endl;
	cout << "|" << setw(8) << printImpr(cells[19].getImpr()) << setw(70) << " ";
	cout << "|" << setw(8) << printImpr(cells[31].getImpr()) << endl; 
 cout << "|" << setw(8) << printImpr(cells[19].getImpr()) << setw(70) << " ";
	cout << "|" << setw(8) << printImpr(cells[31].getImpr()) << endl; 


}