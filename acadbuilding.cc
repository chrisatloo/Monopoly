#include "acadbuilding.h"

#include <iostream>

using namespace std;


AcadBuilding::AcadBuilding(string name, int cost, int costImpr, const int rentCharge[6]):
	Properties(name, cost), costImpr(costImpr) {
	for (int i = 0; i < 6; i++) { //deep copy
		rent[i] = rentCharge[i];
	}
}

AcadBuilding::~AcadBuilding() {
	delete [] rent;
}

int AcadBuilding::getCostImpr() {
	return costImpr;
} 

int AcadBuilding::getRent(int impr) {
	return rent[impr];
}

