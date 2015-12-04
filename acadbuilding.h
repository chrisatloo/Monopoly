#ifndef ACADBUILDING_H
#define ACADBUILDING_H

#include "properties.h"


class AcadBuilding: public Properties
{
public:
	AcadBuilding(std::string, int, int , const int*);
	~AcadBuilding();
	int getCostImpr();  // only getter, cost once initialised is set
	int getRent(int);
	void setFee(int);

// field
	int *rent; // array of value
	int costImpr;


};


#endif