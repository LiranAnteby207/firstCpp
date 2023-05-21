#pragma once
#include "Person.h"
class Florist : public Person
{
private:
	// WholeSaler* ws;
	// FlowerArranger fa;
	// DeliveryPerson dp;
public:
	Florist(std::string);
	void acceptOrder(Person*, std::vector<std::string>);
	std::string getName();
};

