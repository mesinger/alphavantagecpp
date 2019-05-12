#include "Quote_Endpoint.hpp"

alphavantage::req::Quote_Endpoint::Quote_Endpoint(const std::string& symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("GLOBAL_QUOTE", key)
{
	params[API_SYMBOL] = symbol;
	params[API_DATATYPE] = datatype;
}
