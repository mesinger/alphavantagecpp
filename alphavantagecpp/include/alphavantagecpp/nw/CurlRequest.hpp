#pragma once

#include "HttpResponse.hpp"
#include "HttpRequest.hpp"

namespace av::nw {
    class CurlHttpRequestFactory;
}

namespace curl {

    class CurlHttpRequest : public HttpRequest {
    public:
        virtual std::optional<HttpResponse> fetch(const std::string &url) const override;
    protected:
        CurlHttpRequest() = default;
    public:
        virtual ~CurlHttpRequest() = default;

        friend class av::nw::CurlHttpRequestFactory;
    };

    size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata);
}
