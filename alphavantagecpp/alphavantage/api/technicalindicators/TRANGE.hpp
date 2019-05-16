#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class TRANGE : public IGenericRequest {

	public:

		TRANGE(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TRANGE() = default;

	};
}
