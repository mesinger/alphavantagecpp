#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class VWAP : public IGenericRequest {

	public:

		VWAP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~VWAP() = default;

	};
}
