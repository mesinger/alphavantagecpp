#include "FX_DAILY.hpp"

alphavantage::req::FX_DAILY::FX_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("FX_DAILY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}
