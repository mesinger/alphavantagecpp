#include "generic.hpp"

using namespace alphavantage::api;

alphavantage::req::IGenericRequest::IGenericRequest(const std::string& function, const std::string& datatype, const std::string& key)
	:IAPIParamFunction(function), IAPIParamDatatype(datatype), IAPIParamApikey(key)
{
}

std::string alphavantage::req::IGenericRequest::getUrl() const
{
	std::string url = "https://www.alphavantage.co/query";
	return url;
}
