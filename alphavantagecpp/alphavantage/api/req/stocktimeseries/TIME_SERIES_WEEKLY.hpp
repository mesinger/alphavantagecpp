#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class TIME_SERIES_WEEKLY : public IGenericRequest {

	public:

		TIME_SERIES_WEEKLY(const std::string& symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TIME_SERIES_WEEKLY() = default;

	};
}
