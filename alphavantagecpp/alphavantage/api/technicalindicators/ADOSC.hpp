#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class ADOSC : public IGenericRequest {

	public:

		ADOSC(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastperiod = "3", const std::string& slowperiod = "10", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~ADOSC() = default;

	};
}
