#include "FX_INTRADAY.hpp"

alphavantage::req::FX_INTRADAY::FX_INTRADAY(const std::string& from_symbol, const std::string& to_symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IGenericRequest("FX_INTRADAY", key)
{
	params[API_FROM_SYMBOL] = from_symbol;
	params[API_TO_SYMBOL] = to_symbol;
	params[API_INTERVAL] = interval;
	params[API_OUTPUTSIZE] = outputsize;
	params[API_DATATYPE] = datatype;
}
