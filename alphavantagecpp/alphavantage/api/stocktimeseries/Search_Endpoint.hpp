#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class Search_Endpoint : public IGenericRequest {

	public:

		Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~Search_Endpoint() = default;

	};
}
