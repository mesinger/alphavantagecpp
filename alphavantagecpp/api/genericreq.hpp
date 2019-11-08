#pragma once

#include <map>
#include <string>
#include "api/param/url.hpp"

namespace alphavantage::api {

	/*
	most generic request to alphavantage
	*/
	class IGenericRequest {

	public:

		IGenericRequest(const std::string& function, const std::string& key);
		virtual ~IGenericRequest() = default;

		virtual std::string load();
		virtual std::string getUrl() const;

		inline bool succeded() const {
			return lastRequestSucceded;
		}

	protected:

		std::map<std::string, std::string> params;

	private:

		bool lastRequestSucceded = false;

	};
}
