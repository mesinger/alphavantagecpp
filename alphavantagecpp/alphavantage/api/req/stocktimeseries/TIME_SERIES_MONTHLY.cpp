#include "TIME_SERIES_MONTHLY.hpp"

alphavantage::req::TIME_SERIES_MONTHLY::TIME_SERIES_MONTHLY(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_MONTHLY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}
