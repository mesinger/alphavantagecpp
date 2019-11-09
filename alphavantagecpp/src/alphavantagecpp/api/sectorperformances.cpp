#include "alphavantagecpp/api/sectorperformances/sectorperformances.hpp"

using namespace av;

SECTOR::SECTOR(const std::string& key)
        :AlphaVantageRequest("SECTOR", key)
{
}
