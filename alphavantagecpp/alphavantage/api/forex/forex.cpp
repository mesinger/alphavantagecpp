#include "forex.hpp"

using namespace alphavantage::req;

CURRENCY_EXCHANGE_RATE::CURRENCY_EXCHANGE_RATE(const std::string& from_currency, const std::string& to_currency, const std::string& key)
	:IGenericRequest("CURRENCY_EXCHANGE_RATE", key)
{
	params[API_FROM_CURRENCY] = from_currency;
	params[API_TO_CURRENCY] = to_currency;
}

FX_DAILY::FX_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("FX_DAILY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}

FX_INTRADAY::FX_INTRADAY(const std::string& from_symbol, const std::string& to_symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("FX_INTRADAY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_INTERVAL] = interval;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}

FX_MONTHLY::FX_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("FX_MONTHLY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_DATATYPE] = datatype;
}

FX_WEEKLY::FX_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("FX_WEEKLY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_DATATYPE] = datatype;
}
