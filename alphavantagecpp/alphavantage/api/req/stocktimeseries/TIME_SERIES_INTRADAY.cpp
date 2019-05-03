#include "TIME_SERIES_INTRADAY.hpp"
#include "nw/network.hpp"

namespace nw = alphavantage::network::http;
using namespace alphavantage::api;

alphavantage::req::TIME_SERIES_INTRADAY::TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize, const std::string& datatype)
	:IStockTimeSeries("TIME_SERIES_INTRADAY", datatype, key, outputsize), IAPIParamSymbol(symbol), IAPIParamInterval(interval)
{
}

void alphavantage::req::TIME_SERIES_INTRADAY::load() const
{
	auto req = nw::CurlRequest();

	std::unique_ptr<char[]> rsp = std::make_unique<char[]>(CURL_MAX_RSP_SIZE);

	int read = req.send(getUrl(), rsp.get(), CURL_MAX_RSP_SIZE);

	if (read > 0) {

		std::string msg(rsp.get());
		std::cout << msg << std::endl;
	}
}

std::string alphavantage::req::TIME_SERIES_INTRADAY::getUrl() const
{
	std::string url = IGenericRequest::getUrl();

	url += "?function=" + getApiFunction();
	url += "&symbol=" + getApiSymbol();
	url += "&interval=" + getApiIntervalStr();
	url += "&outputsize=" + getApiOutputsizeStr();
	url += "&datatype=" + getApiDatatypeStr();
	url += "&apikey=" + getApiKey();

	return url;
}
