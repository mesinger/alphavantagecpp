#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class STOCHF : public IGenericRequest {

	public:

		STOCHF(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastkperiod = "5", const std::string& fastdperiod = "3", const std::string& fastdmatype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~STOCHF() = default;

	};
}
