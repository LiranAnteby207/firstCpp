#pragma once
#include "Person.h"
class FlowerArranger : public Person
{
public:
	FlowerArranger(std::string);
	void arrangeFlowers(FlowersBouquet*);
};

