#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class FX_WEEKLY : public IGenericRequest {

	public:

		FX_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype = "json");
		virtual ~FX_WEEKLY() = default;

	};
}
