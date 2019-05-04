#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class Search_Endpoint : public IGenericRequest {

	public:

		Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype = API_DATATYPE_JSON_STR);
		virtual ~Search_Endpoint() = default;

	};
}
