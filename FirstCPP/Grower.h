#pragma once
#include "Person.h"
#include "Gardener.h"
class Grower : public Person
{
protected:
	Gardener* g;
public:
	Grower(std::string, Gardener*);
	FlowersBouquet* acceptOrder(std::vector<std::string>);
};

