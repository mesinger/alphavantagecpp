#include "FX_MONTHLY.hpp"

alphavantage::req::FX_MONTHLY::FX_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype)
	:IGenericRequest("FX_MONTHLY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_DATATYPE] = datatype;
}
