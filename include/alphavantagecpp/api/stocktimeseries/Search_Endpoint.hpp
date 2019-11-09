#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class Search_Endpoint : public AlphaVantageRequest {

	public:

		Search_Endpoint(const std::string& keywords, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~Search_Endpoint() = default;

	};
}
