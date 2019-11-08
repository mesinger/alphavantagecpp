#pragma once

#include <string>
#include <curl/curl.h>
#include <iostream>
#include <vector>
#include <memory>

#define CURL_MAX_RSP_SIZE 1000000 // max size for response 1M
#define HTTP_STATUS_OK 200

namespace alphavantage {
	namespace network {

		namespace http {

			size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata);

			/**
			class to perform http requests with curl
			*/
			class CurlRequest {

			protected:

				/*
				performs http request to given url
				and stores response in buf
				and http statuscode in phttpStatusCode
				returns num of bytes read, or -1
				*/
				int send(const std::string& url, char* buf, size_t szbuf, long* phttpStatusCode);

				CurlRequest() = default;
				virtual ~CurlRequest() = default;

			private:

				//resets buffers for curl parsing
				void reset();

				//buffer to store response
				char* calleeBuffer = nullptr;
				//size of response buffer
				size_t szCalleeBuffer = 0;
				//received data
				size_t szReceivedData = 0;

				friend size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata);
			};
		}

		class Request : public http::CurlRequest {
		public:

			Request(const std::string& url);
			virtual ~Request() = default;

			virtual bool send(std::string& response);

		protected:

			std::string url;
		};
	}
}
