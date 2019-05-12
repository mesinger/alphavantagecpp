#include "Search_Endpoint.hpp"

alphavantage::req::Search_Endpoint::Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype)
	:IGenericRequest("SYMBOL_SEARCH", key)
{
	params[API_KEYWORDS] = keywords;
	params[API_DATATYPE] = datatype;
}
