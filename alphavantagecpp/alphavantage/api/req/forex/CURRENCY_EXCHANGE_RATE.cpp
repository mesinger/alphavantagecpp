#include "CURRENCY_EXCHANGE_RATE.hpp"

using namespace alphavantage::api;

alphavantage::req::CURRENCY_EXCHANGE_RATE::CURRENCY_EXCHANGE_RATE(const std::string& from_currency, const std::string& to_currency, const std::string& key)
	:IGenericRequest("CURRENCY_EXCHANGE_RATE", key)
{
	addToUrl(IAPIParamFromCurrency, from_currency);
	addToUrl(IAPIParamToCurrency, to_currency);
}
