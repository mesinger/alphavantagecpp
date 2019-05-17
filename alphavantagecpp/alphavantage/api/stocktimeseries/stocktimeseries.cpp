#include "stocktimeseries.hpp"

using namespace alphavantage::req;

Quote_Endpoint::Quote_Endpoint(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("GLOBAL_QUOTE", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}

Search_Endpoint::Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype)
	:IGenericRequest("SYMBOL_SEARCH", key)
{
	params[API_KEYWORDS] = keywords;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_DAILY::TIME_SERIES_DAILY(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_DAILY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_DAILY_ADJUSTED::TIME_SERIES_DAILY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_DAILY_ADJUSTED", key)
{
	params[API_SYMBOL] = symbol;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_INTRADAY::TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_INTRADAY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_MONTHLY::TIME_SERIES_MONTHLY(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_MONTHLY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_MONTHLY_ADJUSTED::TIME_SERIES_MONTHLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_MONTHLY_ADJUSTED", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_WEEKLY::TIME_SERIES_WEEKLY(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_WEEKLY", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}

TIME_SERIES_WEEKLY_ADJUSTED::TIME_SERIES_WEEKLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("TIME_SERIES_WEEKLY_ADJUSTED", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}
