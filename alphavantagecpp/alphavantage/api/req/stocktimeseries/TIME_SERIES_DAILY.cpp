#include "TIME_SERIES_DAILY.hpp"

using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_DAILY::TIME_SERIES_DAILY(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_DAILY", datatype, key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamOutputsize, outputsize);
}
