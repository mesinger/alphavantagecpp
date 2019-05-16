#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class STOCH : public IGenericRequest {

	public:

		STOCH(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastkperiod = "5", const std::string& slowkperiod = "3", const std::string& slowdperiod = "3", const std::string& slowkmatype = "0", const std::string& slowdmatype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~STOCH() = default;

	};
}
