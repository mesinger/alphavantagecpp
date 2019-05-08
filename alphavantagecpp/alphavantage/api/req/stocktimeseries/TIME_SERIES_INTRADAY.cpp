#include "TIME_SERIES_INTRADAY.hpp"

using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_INTRADAY::TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_INTRADAY", key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamInterval, interval);
	addToUrl(IAPIParamOutputsize, outputsize);
	addToUrl(IAPIParamDatatype, datatype);
}
