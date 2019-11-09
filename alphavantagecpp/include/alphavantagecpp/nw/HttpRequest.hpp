#pragma once

#include <optional>
#include "HttpResponse.hpp"

class HttpRequest {
public:
    virtual std::optional<HttpResponse> fetch(const std::string& url) const = 0;
};
