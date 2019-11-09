#pragma once

#include "alphavantagecpp/nw/HttpRequest.hpp"
#include <memory>

namespace av::nw {
    class HttpRequestFactory {
    public:
        virtual std::shared_ptr<HttpRequest> create() const = 0;
    };

    class CurlHttpRequestFactory : public HttpRequestFactory {
    public:
        virtual std::shared_ptr<HttpRequest> create() const override;
    };
}