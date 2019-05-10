#include "DIGITAL_CURRENCY_DAILY.hpp"

using namespace alphavantage::api;

alphavantage::req::DIGITAL_CURRENCY_DAILY::DIGITAL_CURRENCY_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
	:IGenericRequest("DIGITAL_CURRENCY_DAILY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamMarket, market);
}
