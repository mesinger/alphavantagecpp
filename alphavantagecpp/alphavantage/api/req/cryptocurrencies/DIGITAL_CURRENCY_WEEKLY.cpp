#include "DIGITAL_CURRENCY_WEEKLY.hpp"

using namespace alphavantage::api;

alphavantage::req::DIGITAL_CURRENCY_WEEKLY::DIGITAL_CURRENCY_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
	:IGenericRequest("DIGITA_CURRENCY_WEEKLY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamMarket, market);
}
