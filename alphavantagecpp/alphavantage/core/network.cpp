#include "network.hpp"

using namespace alphavantage::network;
using namespace alphavantage::network::http;

int CurlRequest::send(const std::string& url, char* buf, size_t szbuf) {

	if (!buf || szbuf <= 0) return false;

	calleeBuffer = buf;
	szCalleeBuffer = szbuf;

	CURL * curl;
	CURLcode res;

	curl_global_init(CURL_GLOBAL_DEFAULT);
	curl = curl_easy_init();

	if (curl) {

		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

		/*
		https://curl.haxx.se/libcurl/c/CURLOPT_SSL_VERIFYPEER.html
		This option determines whether curl verifies the authenticity of the peer's certificate. A value of 1 means curl verifies; 0 (zero) means it doesn't.
		*/
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 1L);

		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, this);

		res = curl_easy_perform(curl);

		curl_easy_cleanup(curl);
	}

	curl_global_cleanup();

	size_t readBytes = szReceivedData;

	reset();

	if (res != CURLE_OK) {
		fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
		return -1;
	}

	return readBytes;
}

void CurlRequest::reset() {
	calleeBuffer = nullptr;
	szCalleeBuffer = 0;
	szReceivedData = 0;
}

Request::Request(const std::string& url)
	:url(url)
{}

bool Request::send(std::string& response) const {

	http::CurlRequest httpreq;

	std::unique_ptr<char[]> buf = std::make_unique<char[]>(CURL_MAX_RSP_SIZE);

	int readBytes = httpreq.send(url, buf.get(), CURL_MAX_RSP_SIZE);

	if (readBytes == -1) return false;

	response = std::string(buf.get(), readBytes);

	return true;
}

size_t alphavantage::network::http::write_callback(char* ptr, size_t size, size_t nmemb, void* userdata)
{
	CurlRequest* preq = reinterpret_cast<CurlRequest*>(userdata);

	if (preq->szReceivedData + nmemb > preq->szCalleeBuffer) {

		std::cerr << "CurlRequest: response buffer too small" << std::endl;
		return -1;
	}

	memcpy(&preq->calleeBuffer[preq->szReceivedData], ptr, nmemb);

	preq->szReceivedData += nmemb;

	return nmemb;
}
