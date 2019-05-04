#include "apiparams.hpp"

using namespace alphavantage::api;

IAPIParamDatatype::IAPIParamDatatype(const std::string &datatype)
	:apiDataTypeString(datatype), apiDatatype(getApiDataTypeAsInt(datatype))
{
}

IAPIParamDatatype::IAPIParamDatatype(DATATYPE datatype)
	:apiDatatype(datatype), apiDataTypeString(getApiDataTypeAsString(datatype))
{
}

std::string IAPIParamDatatype::getApiDatatypeStr() const
{
	return apiDataTypeString;
}

DATATYPE IAPIParamDatatype::getApiDatatype() const
{
	return apiDatatype;
}

std::string IAPIParamDatatype::getAsUrlParam() const
{
	return "datatype=" + apiDataTypeString;
}

std::string IAPIParamDatatype::getApiDataTypeAsString(DATATYPE datatype) const
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

DATATYPE IAPIParamDatatype::getApiDataTypeAsInt(const std::string &datatype) const
{
	if(datatype == API_DATATYPE_JSON_STR)
		return API_DATATYPE_JSON;
	else if(datatype == API_DATATYPE_CSV_STR)
		return API_DATATYPE_CSV;

	return -1;
}

IAPIParamFunction::IAPIParamFunction(const std::string& function)
	:apiFunction(function)
{
}

std::string IAPIParamFunction::getApiFunction() const
{
	return apiFunction;
}

std::string IAPIParamFunction::getAsUrlParam() const
{
	return "function=" + apiFunction;
}

IAPIParamInterval::IAPIParamInterval(INTERVAL interval)
	:apiInterval(interval), apiIntervalString(getApiIntervalAsString(interval))
{
}

IAPIParamInterval::IAPIParamInterval(const std::string& interval)
	:apiIntervalString(interval), apiInterval(getApiIntervalAsInt(interval))
{
}

std::string IAPIParamInterval::getApiIntervalStr() const
{
	return apiIntervalString;
}

INTERVAL IAPIParamInterval::getApiInterval() const
{
	return apiInterval;
}

std::string IAPIParamInterval::getAsUrlParam() const
{
	return "interval=" + apiIntervalString;
}

std::string IAPIParamInterval::getApiIntervalAsString(INTERVAL interval) const
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

INTERVAL IAPIParamInterval::getApiIntervalAsInt(const std::string& interval) const
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

IAPIParamApikey::IAPIParamApikey(const std::string& key)
	:apiKey(key)
{
}

std::string IAPIParamApikey::getApiKey() const
{
	return apiKey;
}

std::string IAPIParamApikey::getAsUrlParam() const
{
	return "apikey=" + apiKey;
}

IAPIParamOutputsize::IAPIParamOutputsize(OUTPUTSIZE size)
	:apiOutputsize(size), apiOutputsizeString(getApiOutputsizeAsString(size))
{
}

IAPIParamOutputsize::IAPIParamOutputsize(const std::string& size)
	:apiOutputsizeString(size), apiOutputsize(getApiOutputsizeAsInt(size))
{
}

OUTPUTSIZE IAPIParamOutputsize::getApiOutputsize() const
{
	return apiOutputsize;
}

std::string IAPIParamOutputsize::getApiOutputsizeStr() const
{
	return apiOutputsizeString;
}

std::string IAPIParamOutputsize::getAsUrlParam() const
{
	return "outputsize=" + apiOutputsizeString;
}

std::string IAPIParamOutputsize::getApiOutputsizeAsString(OUTPUTSIZE size) const
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

DATATYPE IAPIParamOutputsize::getApiOutputsizeAsInt(const std::string& size) const
{
	if (size == API_OUTPUTSIZE_COMPACT_STR)
		return API_OUTPUTSIZE_COMPACT;
	else if (size == API_OUTPUTSIZE_FULL_STR)
		return API_OUTPUTSIZE_FULL;

	return -1;
}

IAPIParamSymbol::IAPIParamSymbol(const std::string& symb)
	:apiSymbol(symb)
{
}

std::string IAPIParamSymbol::getApiSymbol() const
{
	return apiSymbol;
}

std::string IAPIParamSymbol::getAsUrlParam() const
{
	return "symbol=" + apiSymbol;
}

IAPIParamKeywords::IAPIParamKeywords(const std::string& keywords)
	:apiKeywords(keywords)
{
}

std::string alphavantage::api::IAPIParamKeywords::getApiKeywords() const
{
	return apiKeywords;
}

std::string alphavantage::api::IAPIParamKeywords::getAsUrlParam() const
{
	return "keywords=" + apiKeywords;
}
