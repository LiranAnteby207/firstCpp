#include "Florist.h"

Florist::Florist(std::string name) : Person("Florist " + name)
{
}

void Florist::acceptOrder(Person* p, std::vector<std::string> v)
{
	std::cout << getName() << " forwards the request to " << "WholeSaler Watson(instead of getName)" << "." << std::endl;
	//FlowersBouquet* fb = ws-> acceptOrder(v);
	//...
	// p-> acceptFlowers(fb);
	//DO not use fb from now on!!!!!!!
}

std::string Florist::getName()
{
	return Person::getName();
}
