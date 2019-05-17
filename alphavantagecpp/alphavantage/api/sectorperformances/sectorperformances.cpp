#include "sectorperformances.hpp"

using namespace alphavantage::req;

SECTOR::SECTOR(const std::string& key)
	:IGenericRequest("SECTOR", key)
{
}
