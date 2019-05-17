#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class FX_MONTHLY : public IGenericRequest {

	public:

		FX_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~FX_MONTHLY() = default;

	};
}
