#include "alphavantagecpp/api/stocktimeseries/stocktimeseries.hpp"

using namespace av;

Quote_Endpoint::Quote_Endpoint(const std::string& symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("GLOBAL_QUOTE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_DATATYPE] = datatype;
}

Search_Endpoint::Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("SYMBOL_SEARCH", key)
{
    urlParams[API_KEYWORDS] = keywords;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_DAILY::TIME_SERIES_DAILY(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_DAILY", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_OUTPUTSIZE] = outputsize;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_DAILY_ADJUSTED::TIME_SERIES_DAILY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_DAILY_ADJUSTED", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_OUTPUTSIZE] = outputsize;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_INTRADAY::TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_INTRADAY", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_OUTPUTSIZE] = outputsize;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_MONTHLY::TIME_SERIES_MONTHLY(const std::string& symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_MONTHLY", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_MONTHLY_ADJUSTED::TIME_SERIES_MONTHLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_MONTHLY_ADJUSTED", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_WEEKLY::TIME_SERIES_WEEKLY(const std::string& symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_WEEKLY", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_DATATYPE] = datatype;
}

TIME_SERIES_WEEKLY_ADJUSTED::TIME_SERIES_WEEKLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TIME_SERIES_WEEKLY_ADJUSTED", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_DATATYPE] = datatype;
}

