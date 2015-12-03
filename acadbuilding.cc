#include "acadbuilding.h"

#include <iostream>

using namespace std;


AcadBuilding::AcadBuilding() {

}

AcadBuilding::~AcadBuilding() {

}

std::string AcadBuilding::getName() {
	return name;
}

int AcadBuliding::getIndex() {
	return index;
}

int AcadBulding::getCost() {
	return cost;
}

int AcadBuilding::getFee() {
	return fee;
}

void AcadBuliding::setFee(int f) {
	fee = f;
}