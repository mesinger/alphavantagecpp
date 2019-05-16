#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class TIME_SERIES_DAILY_ADJUSTED : public IGenericRequest {

	public:

		TIME_SERIES_DAILY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& outputsize = API_OUTPUTSIZE_COMPACT, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TIME_SERIES_DAILY_ADJUSTED() = default;

	};
}