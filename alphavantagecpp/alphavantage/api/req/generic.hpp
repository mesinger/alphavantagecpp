#pragma once

#include "api/param/apiparams.hpp"

namespace alphavantage::req {

	/*
	most generic request to alphavantage
	*/
	class IGenericRequest : PARAM_FUNCTION, PARAM_KEY, PARAM_DATATYPE {

	public:

		IGenericRequest(const std::string& function, const std::string& datatype, const std::string& key);
		virtual ~IGenericRequest() = default;

		virtual void load() const = 0;
		virtual std::string getUrl() const;

	};

	/*
	generic for stock time series
	*/
	class IStockTimeSeries : public IGenericRequest, PARAM_OUTPUTSIZE {

	public:

		IStockTimeSeries(const std::string& function, const std::string& datatype, const std::string& key, const std::string& outputsize);
		virtual ~IStockTimeSeries() = default;
	};
}
