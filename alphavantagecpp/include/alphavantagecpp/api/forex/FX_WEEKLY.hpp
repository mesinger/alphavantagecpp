#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class FX_WEEKLY : public AlphaVantageRequest {

	public:

		FX_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~FX_WEEKLY() = default;

	};
}
