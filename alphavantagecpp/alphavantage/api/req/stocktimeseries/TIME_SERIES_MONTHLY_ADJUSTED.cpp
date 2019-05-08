#include "TIME_SERIES_MONTHLY_ADJUSTED.hpp"

using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_MONTHLY_ADJUSTED::TIME_SERIES_MONTHLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_MONTHLY_ADJUSTED", key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamDatatype, datatype);
}