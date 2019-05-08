#include "TIME_SERIES_WEEKLY.hpp"

using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_WEEKLY::TIME_SERIES_WEEKLY(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_WEEKLY", key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamDatatype, datatype);
}
