#include "TIME_SERIES_MONTHLY.hpp"

using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_MONTHLY::TIME_SERIES_MONTHLY(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_MONTHLY", key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamDatatype, datatype);
}
