#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name): Person("FlowerArranger " + name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* fb)
{
	std::cout << getName() << "arrnges flowers." << std::endl;
	fb->arrange();
	fb->to_string();
}
