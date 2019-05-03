#include "apifunction.hpp"
#include "apidatatype.hpp"
#include "apiinterval.hpp"
#include "apikey.hpp"
#include "apioutputsize.hpp"
#include "apisymbol.hpp"

alphavantage::api::IAPIParamDatatype::IAPIParamDatatype(const std::string &datatype)
	:apiDataTypeString(datatype), apiDatatype(getApiDataTypeAsInt(datatype))
{
}

alphavantage::api::IAPIParamDatatype::IAPIParamDatatype(DATATYPE datatype)
	:apiDatatype(datatype), apiDataTypeString(getApiDataTypeAsString(datatype))
{
}

std::string alphavantage::api::IAPIParamDatatype::getApiDatatypeStr() const
{
	return apiDataTypeString;
}

alphavantage::api::DATATYPE alphavantage::api::IAPIParamDatatype::getApiDatatype() const
{
	return apiDatatype;
}

std::string alphavantage::api::IAPIParamDatatype::getApiDataTypeAsString(alphavantage::api::DATATYPE datatype) const
{
	switch(datatype){
		case API_DATATYPE_JSON:
			return API_DATATYPE_JSON_STR;
		case API_DATATYPE_CSV:
			return API_DATATYPE_CSV_STR;
		default:
			return "invalid datatype";
	}
}

alphavantage::api::DATATYPE alphavantage::api::IAPIParamDatatype::getApiDataTypeAsInt(const std::string &datatype) const
{
	if(datatype == API_DATATYPE_JSON_STR)
		return API_DATATYPE_JSON;
	else if(datatype == API_DATATYPE_CSV_STR)
		return API_DATATYPE_CSV;

	return -1;
}

alphavantage::api::IAPIParamFunction::IAPIParamFunction(const std::string& function)
	:apiFunction(function)
{
}

std::string alphavantage::api::IAPIParamFunction::getApiFunction() const
{
	return apiFunction;
}

alphavantage::api::IAPIParamInterval::IAPIParamInterval(INTERVAL interval)
	:apiInterval(interval), apiIntervalString(getApiIntervalAsString(interval))
{
}

alphavantage::api::IAPIParamInterval::IAPIParamInterval(const std::string& interval)
	:apiIntervalString(interval), apiInterval(getApiIntervalAsInt(interval))
{
}

std::string alphavantage::api::IAPIParamInterval::getApiIntervalStr() const
{
	return apiIntervalString;
}

alphavantage::api::INTERVAL alphavantage::api::IAPIParamInterval::getApiInterval() const
{
	return apiInterval;
}

std::string alphavantage::api::IAPIParamInterval::getApiIntervalAsString(INTERVAL interval) const
{
	switch (interval) {
	case API_INTERVAL_1MIN:
		return API_INTERVAL_1MIN_STR;
	case API_INTERVAL_5MIN:
		return API_INTERVAL_5MIN_STR;
	case API_INTERVAL_15MIN:
		return API_INTERVAL_15MIN_STR;
	case API_INTERVAL_30MIN:
		return API_INTERVAL_30MIN_STR;
	case API_INTERVAL_60MIN:
		return API_INTERVAL_60MIN_STR;
	default:
		return "invalid interval";
	}
}

alphavantage::api::INTERVAL alphavantage::api::IAPIParamInterval::getApiIntervalAsInt(const std::string& interval) const
{
	if (interval == API_INTERVAL_1MIN_STR)
		return API_INTERVAL_1MIN;
	else if (interval == API_INTERVAL_5MIN_STR)
		return API_INTERVAL_5MIN;
	else if (interval == API_INTERVAL_15MIN_STR)
		return API_INTERVAL_15MIN;
	else if (interval == API_INTERVAL_30MIN_STR)
		return API_INTERVAL_30MIN;
	else if (interval == API_INTERVAL_60MIN_STR)
		return API_INTERVAL_60MIN;

	return -1;
}

alphavantage::api::IAPIParamApikey::IAPIParamApikey(const std::string& key)
	:apiKey(key)
{
}

std::string alphavantage::api::IAPIParamApikey::getApiKey() const
{
	return apiKey;
}

alphavantage::api::IAPIParamOutputsize::IAPIParamOutputsize(OUTPUTSIZE size)
	:apiOutputsize(size), apiOutputsizeString(getApiOutputsizeAsString(size))
{
}

alphavantage::api::IAPIParamOutputsize::IAPIParamOutputsize(const std::string& size)
	:apiOutputsizeString(size), apiOutputsize(getApiOutputsizeAsInt(size))
{
}

alphavantage::api::OUTPUTSIZE alphavantage::api::IAPIParamOutputsize::getApiOutputsize() const
{
	return apiOutputsize;
}

std::string alphavantage::api::IAPIParamOutputsize::getApiOutputsizeAsString(OUTPUTSIZE size) const
{
	switch (size) {
	case API_OUTPUTSIZE_COMPACT:
		return API_OUTPUTSIZE_COMPACT_STR;
	case API_OUTPUTSIZE_FULL:
		return API_OUTPUTSIZE_FULL_STR;
	default:
		return "invalid outputsize";
	}
}

alphavantage::api::DATATYPE alphavantage::api::IAPIParamOutputsize::getApiOutputsizeAsInt(const std::string& size) const
{
	if (size == API_OUTPUTSIZE_COMPACT_STR)
		return API_OUTPUTSIZE_COMPACT;
	else if (size == API_OUTPUTSIZE_FULL_STR)
		return API_OUTPUTSIZE_FULL;

	return -1;
}

alphavantage::api::IAPIParamSymbol::IAPIParamSymbol(const std::string& symb)
	:apiSymbol(symb)
{
}

std::string alphavantage::api::IAPIParamSymbol::getApiSymbol() const
{
	return apiSymbol;
}
