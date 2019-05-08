#include "Search_Endpoint.hpp"

using namespace alphavantage::api;

alphavantage::req::Search_Endpoint::Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype)
	:IGenericRequest("SYMBOL_SEARCH", key)
{
	addToUrl(IAPIParamKeywords, keywords);
	addToUrl(IAPIParamDatatype, datatype);
}
