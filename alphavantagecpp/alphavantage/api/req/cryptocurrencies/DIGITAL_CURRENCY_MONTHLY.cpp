#include "DIGITAL_CURRENCY_MONTHLY.hpp"

alphavantage::req::DIGITAL_CURRENCY_MONTHLY::DIGITAL_CURRENCY_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
	:IGenericRequest("DIGITAL_CURRENCY_MONTHLY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_MARKET] = market;
}
