#include "dice.h"


Dice::Dice() { srand (time(NULL)); };

Dice::~Dice() {};

int Dice::rollDice() {
	return rand() % 6 + 1;
}

