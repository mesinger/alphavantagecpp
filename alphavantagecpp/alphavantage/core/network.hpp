#pragma once

#include <string>
#include <curl/curl.h>
#include <iostream>
#include <vector>

namespace alphavantage {
	namespace network {



		namespace https {

			//forward declarations

			//write callback function for curl
			size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata);

			/**
			class to perform http requests with curl
			*/
			class CurlRequest {
			public:
				CurlRequest() = default;
				virtual ~CurlRequest() = default;

				/*
				performs http request to given url
				and stores response in buf
				*/
				bool send(const std::string& url, char* buf, size_t szbuf) {

					if (!buf || szbuf <= 0) return false;

					calleeBuffer = buf;
					szCalleeBuffer = szbuf;

					CURL* curl;
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

					if (res != CURLE_OK)
						fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

					reset();

					return res == CURLE_OK;
				}

			protected:

				inline void reset() {
					calleeBuffer = nullptr;
					szCalleeBuffer = 0;
					szReceivedData = 0;
				}

			private:

				//buffer to store response
				char* calleeBuffer = nullptr;
				//size of response buffer
				size_t szCalleeBuffer = 0;
				//received data
				size_t szReceivedData = 0;

				friend size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata);
			};

			size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata) {

				CurlRequest* preq = reinterpret_cast<CurlRequest*>(userdata);

				if (preq->szReceivedData + nmemb > preq->szCalleeBuffer) {

					std::cerr << "CurlRequest: response buffer too small" << std::endl;
					return -1;
				}

				memcpy(&preq->calleeBuffer[preq->szReceivedData], ptr, nmemb);

				preq->szReceivedData += nmemb;

				return nmemb;
			}
		}
	}
}
