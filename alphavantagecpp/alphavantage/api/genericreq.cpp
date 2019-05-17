#include "genericreq.hpp"
#include "nw/network.hpp"
#include "util/stringutil.hpp"

namespace nw = alphavantage::network;

using namespace alphavantage::api;

IGenericRequest::IGenericRequest(const std::string& function, const std::string& key)
{
	params[API_FUNCTION] = function;
	params[API_APIKEY] = key;
}

std::string IGenericRequest::load()
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

std::string IGenericRequest::getUrl() const
{
	std::string url = "https://www.alphavantage.co/query";

	auto it = params.cbegin();

	auto addToUrl = [&url](std::map<std::string, std::string>::const_iterator & it, const std::string getParamSymb) {
		url += getParamSymb + it->first + "=" + it->second;
	};

	addToUrl(it, "?");

	for (++it; it != params.cend(); ++it) {

		addToUrl(it, "&");
	}

	return url;
}