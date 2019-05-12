#include "TIME_SERIES_WEEKLY.hpp"

alphavantage::req::TIME_SERIES_WEEKLY::TIME_SERIES_WEEKLY(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_WEEKLY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}
