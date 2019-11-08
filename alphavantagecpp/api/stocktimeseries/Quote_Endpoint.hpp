#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class Quote_Endpoint : public IGenericRequest {

	public:

		Quote_Endpoint(const std::string& symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~Quote_Endpoint() = default;

	};
}
