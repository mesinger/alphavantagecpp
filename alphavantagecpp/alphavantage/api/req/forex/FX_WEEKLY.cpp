#include "FX_WEEKLY.hpp"

using namespace alphavantage::api;

alphavantage::req::FX_WEEKLY::FX_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("FX_WEEKLY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamDatatype, datatype);
}
