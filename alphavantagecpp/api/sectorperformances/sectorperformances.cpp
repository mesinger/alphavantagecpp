#include "sectorperformances.hpp"

using namespace alphavantage::api;

SECTOR::SECTOR(const std::string& key)
	:IGenericRequest("SECTOR", key)
{
}
