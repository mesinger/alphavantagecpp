#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class OBV : public IGenericRequest {

	public:

		OBV(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~OBV() = default;

	};
}
