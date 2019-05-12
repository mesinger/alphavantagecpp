#include "TIME_SERIES_WEEKLY_ADJUSTED.hpp"

alphavantage::req::TIME_SERIES_WEEKLY_ADJUSTED::TIME_SERIES_WEEKLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_WEEKLY_ADJUSTED", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}
