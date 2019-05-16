#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class ADXR : public IGenericRequest {

	public:

		ADXR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~ADXR() = default;

	};
}
