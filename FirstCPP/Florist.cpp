#include "Florist.h"

Florist::Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp) : Person("Florist " + name), ws(ws), fa(fa), dp(dp)
{
}

void Florist::acceptOrder(Person* p, std::vector<std::string> v)
{
	std::cout << getName() << " forwards the request to " << ws->getName() << "." << std::endl;
	FlowersBouquet* fb = ws-> acceptOrder(v);
	std::cout << ws->getName() << " returns flowers to " << getName() << "." << std::endl;
	std::cout << getName() << " requests flowers arrangement from " << fa->getName() << "." << std::endl;
	fa->arrangeFlowers(fb);
	std::cout << fa->getName() << " returns arranged flowers to " << getName() << "." << std::endl;
	std::cout << getName() << " forwards flowers to " << dp->getName() << "." << std::endl;
	dp->deliver(p,fb);
}

std::string Florist::getName()
{
	return Person::getName();
}
