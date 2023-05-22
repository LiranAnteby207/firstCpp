#pragma once
#include "Person.h"
#include "Grower.h"
class Wholesaler : public Person
{
protected:
	Grower* g;
public:
	Wholesaler(std::string, Grower*);
	FlowersBouquet* acceptOrder(std::vector<std::string>);
	std::string getName();
};

