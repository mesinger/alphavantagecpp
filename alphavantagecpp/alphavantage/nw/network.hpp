#pragma once

#include <string>
#include <curl/curl.h>
#include <iostream>
#include <vector>
#include <memory>

#define CURL_MAX_RSP_SIZE 100000 // max size for response 100k

namespace alphavantage {
	namespace network {

		namespace http {

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
				returns num of bytes read, or -1
				*/
				int send(const std::string& url, char* buf, size_t szbuf);

			protected:

				//resets buffers for curl parsing
				void reset();

			private:

				//buffer to store response
				char* calleeBuffer = nullptr;
				//size of response buffer
				size_t szCalleeBuffer = 0;
				//received data
				size_t szReceivedData = 0;

				friend size_t write_callback(char* ptr, size_t size, size_t nmemb, void* userdata);
			};
		}

		class Request{
		public:

			Request(const std::string& url);
			virtual ~Request() = default;

			virtual bool send(std::string& response) const;

		protected:

			std::string url;
		};
	}
}
