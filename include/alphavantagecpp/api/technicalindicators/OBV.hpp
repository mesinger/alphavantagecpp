#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class OBV : public AlphaVantageRequest {

	public:

		OBV(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~OBV() = default;

	};
}
