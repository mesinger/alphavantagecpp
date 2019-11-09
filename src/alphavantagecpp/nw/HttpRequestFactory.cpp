#include "alphavantagecpp/nw/HttpRequestFactory.hpp"
#include "alphavantagecpp/nw/CurlRequest.hpp"

std::shared_ptr<HttpRequest> av::nw::CurlHttpRequestFactory::create() const {
    return std::shared_ptr<curl::CurlHttpRequest>(new curl::CurlHttpRequest());
}
