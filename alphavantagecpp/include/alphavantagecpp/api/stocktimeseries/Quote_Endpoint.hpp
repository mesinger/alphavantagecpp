#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class Quote_Endpoint : public AlphaVantageRequest {

	public:

		Quote_Endpoint(const std::string& symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~Quote_Endpoint() = default;

	};
}
