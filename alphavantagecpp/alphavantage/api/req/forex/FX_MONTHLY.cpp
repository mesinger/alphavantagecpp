#include "FX_MONTHLY.hpp"

using namespace alphavantage::api;

alphavantage::req::FX_MONTHLY::FX_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("FX_MONTHLY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamDatatype, datatype);
}
