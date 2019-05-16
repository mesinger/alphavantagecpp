#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class SAR : public IGenericRequest {

	public:

		SAR(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& acceleration = "0.01", const std::string& maximum = "0.20", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~SAR() = default;

	};
}
