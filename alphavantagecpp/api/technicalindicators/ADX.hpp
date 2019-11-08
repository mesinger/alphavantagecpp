#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class ADX : public IGenericRequest {

	public:

		ADX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~ADX() = default;

	};
}
