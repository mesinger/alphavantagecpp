#include "alphavantagecpp/api/forex/forex.hpp"

using namespace av;

CURRENCY_EXCHANGE_RATE::CURRENCY_EXCHANGE_RATE(const std::string& from_currency, const std::string& to_currency, const std::string& key)
        :AlphaVantageRequest("CURRENCY_EXCHANGE_RATE", key)
{
    urlParams[API_FROM_CURRENCY] = from_currency;
    urlParams[API_TO_CURRENCY] = to_currency;
}

FX_DAILY::FX_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
        :AlphaVantageRequest("FX_DAILY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_OUTPUTSIZE] = outputsize;
    urlParams[API_DATATYPE] = datatype;
}

FX_INTRADAY::FX_INTRADAY(const std::string& from_symbol, const std::string& to_symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
        :AlphaVantageRequest("FX_INTRADAY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_OUTPUTSIZE] = outputsize;
    urlParams[API_DATATYPE] = datatype;
}

FX_MONTHLY::FX_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("FX_MONTHLY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_DATATYPE] = datatype;
}

FX_WEEKLY::FX_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("FX_WEEKLY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_DATATYPE] = datatype;
}
