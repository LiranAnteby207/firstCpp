#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name): Person(name)
{
}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* fb)
{
	std::cout << getName() << "delivers the flowers to " << p->getName() << "." << std::endl;
	p->acceptFlowers(fb);
}
