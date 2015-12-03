#ifndef ACADBUILDING_H
#define ACADBUILDING_H

class AcadBuilding
{
public:
	AcadBuilding();
	~AcadBuilding();
	std::string getName();
	int getIndex();
	int getCost();  // only getter, cost once initialised is set
	int getFee();
	void setFee(int);

// field
	std::string name;
	int index, cost, fee, impr;

};


#endif