#include "genericstocktimeseries.hpp"

alphavantage::req::IStockTimeSeries::IStockTimeSeries(const std::string& function, const std::string& datatype, const std::string& key, const std::string& outputsize)
	:IGenericRequest(function, datatype, key), IAPIParamOutputsize(outputsize)
{
}