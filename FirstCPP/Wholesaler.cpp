#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* g): Person( "Wholesaler " + name), g(g)
{
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> order)
{
	std::cout << getName() << " forwards the request to " << g->getName() << "." << std::endl;
	FlowersBouquet* fb = g->acceptOrder(order);
	std::cout << g->getName() << " returns flowers to " << getName() << "." << std::endl;
	return fb;

}
