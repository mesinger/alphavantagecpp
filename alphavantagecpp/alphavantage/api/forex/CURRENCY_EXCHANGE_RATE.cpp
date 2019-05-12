#include "CURRENCY_EXCHANGE_RATE.hpp"

alphavantage::req::CURRENCY_EXCHANGE_RATE::CURRENCY_EXCHANGE_RATE(const std::string& from_currency, const std::string& to_currency, const std::string& key)
	:IGenericRequest("CURRENCY_EXCHANGE_RATE", key)
{
	params[API_FROM_CURRENCY] = from_currency;
	params[API_TO_CURRENCY] = to_currency;
}
