#include "Quote_Endpoint.hpp"

using namespace alphavantage::api;

alphavantage::req::Quote_Endpoint::Quote_Endpoint(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("GLOBAL_QUOTE", key)
{
	addToUrl(IAPIParamSymbol, symbol);
	addToUrl(IAPIParamDatatype, datatype);
}
