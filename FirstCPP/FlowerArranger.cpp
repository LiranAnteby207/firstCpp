#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name): Person("FlowerArranger " + name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* fb)
{
	std::cout << getName() << " arranges flowers. " << std::endl;
	fb->arrange();
}
