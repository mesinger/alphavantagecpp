#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class FX_MONTHLY : public IGenericRequest {

	public:

		FX_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype = "json");
		virtual ~FX_MONTHLY() = default;

	};
}
