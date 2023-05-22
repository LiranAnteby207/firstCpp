#include "Grower.h"

Grower::Grower(std::string name, Gardener* g): Person("Grower " + name), g(g)
{
}

FlowersBouquet* Grower::acceptOrder(std::vector<std::string> flowers)
{
	std::cout << getName() << " forwards the request to " << g->getName() << "." << std::endl;
	FlowersBouquet* fb = g->prepareBouquet(flowers);
	std::cout << g->getName() << " returns flowers to " << getName() << "." << std::endl;
	return fb;

}
