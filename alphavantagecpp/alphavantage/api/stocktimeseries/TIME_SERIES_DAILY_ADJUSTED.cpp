#include "TIME_SERIES_DAILY_ADJUSTED.hpp"

alphavantage::req::TIME_SERIES_DAILY_ADJUSTED::TIME_SERIES_DAILY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_DAILY_ADJUSTED", key)
{
	params[API_SYMBOL] = symbol;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}
