#include "TIME_SERIES_DAILY_ADJUSTED.hpp"

using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_DAILY_ADJUSTED::TIME_SERIES_DAILY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_DAILY_ADJUSTED", datatype, key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamOutputsize, outputsize);
}
