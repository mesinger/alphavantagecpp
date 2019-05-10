#include "FX_DAILY.hpp"

using namespace alphavantage::api;

alphavantage::req::FX_DAILY::FX_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("FX_DAILY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamOutputsize, outputsize);
	addToUrl(IAPIParamDatatype, datatype);
}
