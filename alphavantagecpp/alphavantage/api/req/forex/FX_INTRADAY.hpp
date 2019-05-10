#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class FX_INTRADAY : public IGenericRequest {

	public:

		FX_INTRADAY(const std::string& from_symbol, const std::string& to_symbol, const std::string& interval, const std::string& key, const std::string& outputsize = "compact", const std::string& datatype = "json");
		virtual ~FX_INTRADAY() = default;

	};
}
