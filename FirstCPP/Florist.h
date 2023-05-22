#pragma once
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
class Florist : public Person
{
private:
	 Wholesaler* ws;
	 FlowerArranger* fa;
	 DeliveryPerson* dp;
public:
	Florist(std::string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
	void acceptOrder(Person*, std::vector<std::string>);
	std::string getName();
};

