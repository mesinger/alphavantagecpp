#include "TIME_SERIES_INTRADAY.hpp"

alphavantage::req::TIME_SERIES_INTRADAY::TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_INTRADAY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}
