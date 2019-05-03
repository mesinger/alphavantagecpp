#include "genericreq.hpp"
#include "nw/network.hpp"

using namespace alphavantage::api;
namespace nw = alphavantage::network::http;

alphavantage::req::IGenericRequest::IGenericRequest(const std::string& function, const std::string& datatype, const std::string& key)
{
	addToUrl(IAPIParamFunction, function);
	addToUrl(IAPIParamDatatype, datatype);
	addToUrl(IAPIParamApikey, key);
}

std::string alphavantage::req::IGenericRequest::load() const
{
	auto req = nw::CurlRequest();

	std::unique_ptr<char[]> rsp = std::make_unique<char[]>(CURL_MAX_RSP_SIZE);

	int read = req.send(getUrl(), rsp.get(), CURL_MAX_RSP_SIZE);

	if (read > 0) {

		std::string msg(rsp.get());
		return msg;
	}

	return "";
}

std::string alphavantage::req::IGenericRequest::getUrl() const
{
	std::string url = "https://www.alphavantage.co/query";

	url += "?" + urlParameters[0]->getAsUrlParam();

	for (int i = 1; i < urlParameters.size(); i++) {

		url += "&" + urlParameters[i]->getAsUrlParam();
	}

	return url;
}