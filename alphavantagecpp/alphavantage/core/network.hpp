#pragma once

#include <string>
#include <curl/curl.h>
#include <iostream>
#include <vector>

namespace alphavantage {
	namespace network {
		namespace https {

			bool GET(const std::string& url);
			size_t write_callback(char *ptr, size_t size, size_t nmemb, void *userdata);

			bool GET(const std::string& url) {

				CURL *curl;
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

					res = curl_easy_perform(curl);

					curl_easy_cleanup(curl);
				}

				curl_global_cleanup();

				if (res != CURLE_OK)
					fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

				std::cout << (res == CURLE_OK);
				return res == CURLE_OK;
			}

			size_t write_callback(char *ptr, size_t size, size_t nmemb, void *userdata) {

				

				return nmemb;
			}
		}
	}
}
