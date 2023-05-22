#pragma once
#include "Person.h"

class DeliveryPerson : public Person 
{
public:
	DeliveryPerson(std::string);
	void deliver(Person*, FlowersBouquet*);
};

