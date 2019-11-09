#include "alphavantagecpp/nw/CurlRequest.hpp"
#include <iostream>
#include <curl/curl.h>

std::optional<HttpResponse> curl::CurlHttpRequest::fetch(const std::string &url) const {

    std::string response;
    long httpStatusCode = 0;

    CURL* curl;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if(curl) {

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode curlRspCode = curl_easy_perform(curl);

        if(curlRspCode == CURLE_OK)
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpStatusCode);
        else {
            std::cerr << "curl failed with code " << curlRspCode << std::endl << curl_easy_strerror(curlRspCode) << std::endl;
            return std::nullopt;
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();

    return std::make_optional<HttpResponse>(response, response.size(), httpStatusCode);
}

size_t curl::write_callback(char *ptr, size_t size, size_t nmemb, void *userdata) {
    std::string* response = reinterpret_cast<std::string*>(userdata);
    response->append(ptr, nmemb);
    return nmemb;
}
