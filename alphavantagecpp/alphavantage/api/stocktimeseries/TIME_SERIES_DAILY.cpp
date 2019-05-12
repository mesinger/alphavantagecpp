#include "TIME_SERIES_DAILY.hpp"

alphavantage::req::TIME_SERIES_DAILY::TIME_SERIES_DAILY(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_DAILY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}
