#include "DIGITAL_CURRENCY_WEEKLY.hpp"

alphavantage::req::DIGITAL_CURRENCY_WEEKLY::DIGITAL_CURRENCY_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
	:IGenericRequest("DIGITA_CURRENCY_WEEKLY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_MARKET] = market;
}
