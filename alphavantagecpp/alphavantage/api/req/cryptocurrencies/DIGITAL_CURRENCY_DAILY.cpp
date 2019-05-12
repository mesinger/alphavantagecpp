#include "DIGITAL_CURRENCY_DAILY.hpp"

alphavantage::req::DIGITAL_CURRENCY_DAILY::DIGITAL_CURRENCY_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
	:IGenericRequest("DIGITAL_CURRENCY_DAILY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_MARKET] = market;
}
