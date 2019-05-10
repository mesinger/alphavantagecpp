#include "DIGITAL_CURRENCY_MONTHLY.hpp"

using namespace alphavantage::api;

alphavantage::req::DIGITAL_CURRENCY_MONTHLY::DIGITAL_CURRENCY_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
	:IGenericRequest("DIGITAL_CURRENCY_MONTHLY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamMarket, market);
}
