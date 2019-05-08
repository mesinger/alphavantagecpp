#include "genericreq.hpp"
#include "nw/network.hpp"
#include "util/stringutil.hpp"

using namespace alphavantage::api;
namespace nw = alphavantage::network;

alphavantage::req::IGenericRequest::IGenericRequest(const std::string& function, const std::string& key)
{
	addToUrl(IAPIParamFunction, function);
	addToUrl(IAPIParamApikey, key);
}

std::string alphavantage::req::IGenericRequest::load()
{
	auto conn = nw::Request(getUrl());

	std::string rsp;
	bool sentSuccessfully = conn.send(rsp);

	if (sentSuccessfully) {

		bool responseContainsError = util::string::contains(rsp, { "error" }, false);

		lastRequestSucceded = !responseContainsError;

		return rsp;
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