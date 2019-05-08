#include "genericreq.hpp"
#include "nw/network.hpp"
#include "util/stringutil.hpp"

using namespace alphavantage::api;
namespace nw = alphavantage::network::http;

alphavantage::req::IGenericRequest::IGenericRequest(const std::string& function, const std::string& key)
{
	addToUrl(IAPIParamFunction, function);
	addToUrl(IAPIParamApikey, key);
}

std::string alphavantage::req::IGenericRequest::load()
{
	auto conn = nw::CurlRequest();

	std::unique_ptr<char[]> rsp = std::make_unique<char[]>(CURL_MAX_RSP_SIZE);

	long httpStatusCode;
	int read = conn.send(getUrl(), rsp.get(), CURL_MAX_RSP_SIZE, &httpStatusCode);

	if (read > 0 && httpStatusCode == HTTP_STATUS_OK) {

		std::string msg(rsp.get());

		bool responseContainsError = util::string::contains(msg, { "error" }, false);

		lastRequestSucceded = responseContainsError;

		return msg;
	}

	lastRequestSucceded = false;

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