#include "alphavantagecpp/api/AlphaVantageRequest.hpp"
#include <iostream>
#include "alphavantagecpp/util/strings.hpp"

#define HTTP_STATUS_OK 200

av::AlphaVantageRequest::AlphaVantageRequest(const std::string &function, const std::string &key) {
    this->function = function;
    urlParams[API_APIKEY] = key;

    requestFactory = std::make_shared<av::nw::CurlHttpRequestFactory>();
}

std::optional<std::string> av::AlphaVantageRequest::fetch() const {

    auto httpRequest = requestFactory->create();
    auto httpResponse = httpRequest->fetch(buildUrl());

    if(httpResponse) {

        auto [response, responseLenght, httpStatusCode] = httpResponse.value();

        if(httpStatusCode != HTTP_STATUS_OK) {
            std::cerr << "alphavantage request returned HTTP Status Code " << httpStatusCode << std::endl;
            return std::nullopt;
        }

        if(responseLenght == 0) {
            std::cerr << "alphavantage request was empty" << std::endl;
            return std::nullopt;
        }

        if(av::util::string::containsPatterns(response, {"error", "invalid"}, false)) {
            std::cerr << "Invalid Alphavantage API call" << std::endl;
            return std::nullopt;
        }

        return response;
    }

    return std::nullopt;
}

std::string av::AlphaVantageRequest::buildUrl() const {

    std::string url = "https://www.alphavantage.co/query";

    url += "?";
    url += API_FUNCTION,
    url += "=" + function;

    for(const auto& [param, value] : urlParams)
        url += "&" + param + "=" + value;

    return url;
}
