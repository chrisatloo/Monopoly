#include "board.h"

#include <iostream>
#include <string>
using namespace std;


Board::Board() {
	for (int i = 0; i < 40; i++) {
		cells[i] = Cell("", 0);
	}

}

Board::~Board() {

	delete [] cells;
}

/*
int Board::rollDice() {
	int num1 = Dice::rollDice();
	int num2 = Dice::rollDice();
	cout << "You rolled a " << num1 << "and a " << num2;
	cout << "! That is " << num1 + num2 << "in total!" endl;
	return num1 + num2;
}
*/

string Board::printImpr(int impr) {
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
		return " ";
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
	for ( int i = 20; i < 31; ++i) { cout << "|________";}
	cout << "|" << endl;

	// roll 2 cells
	cout << "|        |" << setw(80) << " " << "|        |" << endl;
	cout << "|--------|" << setw(80) << " " << "|--------|" << endl;
	cout << "|OPT     |" << setw(80) << " " << "|EIT     |" << endl;
	cout << "|" << setw(8) << printImpr(cells[19].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[31].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[19].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[31].getPlayer() << "|" << endl;
	cout << "|________|" << setw(80) << " " << "|________|" << endl;

	// roll 3 cells: similar to roll 2
	cout << "|        |" << setw(80) << " " << "|        |" << endl;
	cout << "|--------|" << setw(80) << " " << "|--------|" << endl;
	cout << "|BMH     |" << setw(80) << " " << "|ESC     |" << endl;
	cout << "|" << setw(8) << printImpr(cells[18].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[32].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[18].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[32].getPlayer() << "|" << endl;
	cout << "|________|" << setw(80) << " " << "|________|" << endl;

	// roll 4 cells: similar to roll 2
	cout << "|SLC     |" << setw(80) << " " << "|SLC     |" << endl;
	cout << "|" << setw(8) << printImpr(cells[17].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[33].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[17].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[33].getPlayer() << "|" << endl;
	cout << "|        |" << setw(80) << " " << "|        |" << endl;
	cout << "|________|" << setw(80) << " " << "|________|" << endl;

	// roll 5 cells: similar to roll 2
	cout << "|        |" << setw(80) << " " << "|        |" << endl;
	cout << "|--------|" << setw(80) << " " << "|--------|" << endl;
	cout << "|LHI     |" << setw(80) << " " << "|C2      |" << endl;
	cout << "|" << setw(8) << printImpr(cells[16].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[34].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[16].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[34].getPlayer() << "|" << endl;
	cout << "|________|" << setw(80) << " " << "|________|" << endl;

	// roll 6 cells: similar to roll 2
	cout << "|UWP     |" << setw(80) << " " << "|REV     |" << endl;
	cout << "|" << setw(8) << printImpr(cells[15].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[35].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[15].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[35].getPlayer() << "|" << endl;
	cout << "|        |" << setw(80) << " " << "|        |" << endl;
	cout << "|________|" << setw(80) << " " << "|________|" << endl;


	// roll 7
	cout << "|        |" << setw(80) << " " << "|NEEDLES |" << endl;
	cout << "|--------|" << setw(80) << " " << "|HALL    |" << endl;
	cout << "|CPH     |" << setw(80) << " " << "|        |" << endl;
	cout << "|" << setw(8) << printImpr(cells[14].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[36].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[14].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[36].getPlayer() << "|" << endl;


	// roll 8
	cout << "|        |" << setw(80) << " " << "|        |" << endl;
	cout << "|--------|" << setw(80) << " " << "|--------|" << endl;
	cout << "|DWE     |" << setw(80) << " " << "|MC      |" << endl;
	cout << "|" << setw(8) << printImpr(cells[13].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[37].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[13].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[37].getPlayer() << "|" << endl;

	// roll 9
	cout << "|--------|" << setw(80) << " " << "|--------|" << endl;
	cout << "|PAC     |" << setw(80) << " " << "|COOP    |" << endl;
	cout << "|        |" << setw(80) << " " << "|FEE     |" << endl;
	cout << "|" << setw(8) << printImpr(cells[12].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[38].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[12].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[38].getPlayer() << "|" << endl;


	// roll 10
	cout << "|--------|" << setw(80) << " " << "|--------|" << endl;
	cout << "|RCH     |" << setw(80) << " " << "|DC      |" << endl;
	cout << "|" << setw(8) << printImpr(cells[11].getImpr()) << "|" << setw(80) << " ";
	cout << "|" << setw(8) << printImpr(cells[39].getImpr()) << "|" << endl;
	cout << "|" << setw(8) << cells[11].getPlayer() << "|" << setw(80) << " ";
	cout << "|" << setw(8) << cells[39].getPlayer() << "|" << endl;

	// bottom roll 11
	cout << "|________|________________________________________________________________________________|________|" << endl;
	cout << "|DC      |        |        |NEEDLES |        |MK      |TUITION |        |SLC     |        |COLLECT |" << endl;
	cout << "|TIMLINE |--------|--------|HALL    |--------|        |        |--------|        |--------|ASOP    |" << endl;
	cout << "|        |HH      |PAS     |        |ECH     |        |        |ML      |        |AL      |        |" << endl;
	for ( int i = 10; i >= 0; --i) { // for loop to print improvement on buildings
		cout << "|" << setw(8) << printImpr(cells[i].getImpr());
	}
	cout << "|" << endl;
	for ( int i = 10; i >= 0; --i) { // for loop to print players
		cout << "|" << setw(8) << cells[i].getPlayer();
	}
	cout << "|" << endl;
	cout << "|________|________|________|________|________|________|________|________|________|________|________|" << endl;
	// finally

}


