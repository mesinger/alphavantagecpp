#pragma once

#include "api/param/apiparams.hpp"
#include <vector>
#include <memory>

//defines to add url parameters
#define addToUrl(cls, v) urlParameters.emplace_back(std::make_shared<cls>(v))

namespace alphavantage::req {

	/*
	most generic request to alphavantage
	*/
	class IGenericRequest {

	public:

		IGenericRequest(const std::string& function, const std::string& datatype, const std::string& key);
		virtual ~IGenericRequest() = default;

		virtual std::string load() const;
		virtual std::string getUrl() const;

	protected:

		std::vector<std::shared_ptr<alphavantage::api::IAPIParam>> urlParameters;

	};
}