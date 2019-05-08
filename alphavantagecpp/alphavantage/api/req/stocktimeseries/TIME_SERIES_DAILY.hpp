#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class TIME_SERIES_DAILY : public IGenericRequest {

	public:

		TIME_SERIES_DAILY(const std::string& symbol, const std::string& key, const std::string& outputsize = API_OUTPUTSIZE_COMPACT_STR, const std::string& datatype = API_DATATYPE_JSON_STR);
		virtual ~TIME_SERIES_DAILY() = default;

	};
}