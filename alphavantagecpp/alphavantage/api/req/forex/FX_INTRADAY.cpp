#include "FX_INTRADAY.hpp"

using namespace alphavantage::api;

alphavantage::req::FX_INTRADAY::FX_INTRADAY(const std::string& from_symbol, const std::string& to_symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("FX_INTRADAY", key)
{
	addToUrl(IAPIParamFromSymbol, from_symbol);
	addToUrl(IAPIParamToSymbol, to_symbol);
	addToUrl(IAPIParamInterval, interval);
	addToUrl(IAPIParamOutputsize, outputsize);
	addToUrl(IAPIParamDatatype, datatype);
}
