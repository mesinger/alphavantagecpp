#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class AD : public IGenericRequest {

	public:

		AD(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~AD() = default;

	};
}
