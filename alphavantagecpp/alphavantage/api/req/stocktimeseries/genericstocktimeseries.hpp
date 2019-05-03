#pragma once

#include "api/req/generic.hpp"

namespace alphavantage::req {

	/*
	generic for stock time series
	*/
	class IStockTimeSeries : public IGenericRequest, PARAM_OUTPUTSIZE {

	public:

		IStockTimeSeries(const std::string& function, const std::string& datatype, const std::string& key, const std::string& outputsize);
		virtual ~IStockTimeSeries() = default;
	};
}
