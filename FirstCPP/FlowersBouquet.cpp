#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet), isArranged(false)
{
}

void FlowersBouquet::arrange()
{
	isArranged = true;
}

std::string FlowersBouquet::to_string()
{
	return join(bouquet, ", ");
}

std::string FlowersBouquet::join(std::vector<std::string> v , const char* delim)
{
	std::ostringstream imploaded;
	std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(imploaded, delim));
	return imploaded.str();
}
