#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class AROONOSC : public IGenericRequest {

	public:

		AROONOSC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~AROONOSC() = default;

	};
}
