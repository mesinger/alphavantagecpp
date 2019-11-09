#pragma once

#include <string>
#include <map>
#include "alphavantagecpp/nw/HttpRequestFactory.hpp"
#include <alphavantagecpp/api/APIPARAMS.hpp>

namespace av {

    class AlphaVantageRequest {
    public:
        virtual std::optional<std::string> fetch() const;
    protected:
        AlphaVantageRequest(const std::string& function, const std::string& key);
        std::string buildUrl() const;

        std::string function;
        std::map<std::string, std::string> urlParams;
    private:
        mutable std::shared_ptr<av::nw::HttpRequestFactory> requestFactory;
    public:
        inline void setRequestFactory(std::shared_ptr<av::nw::HttpRequestFactory> factory) const {
            this->requestFactory = factory;
        }
    };
}
