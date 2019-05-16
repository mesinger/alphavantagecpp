#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class BOP : public IGenericRequest {

	public:

		BOP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~BOP() = default;

	};
}
