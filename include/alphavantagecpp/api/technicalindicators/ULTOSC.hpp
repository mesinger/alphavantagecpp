#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class ULTOSC : public AlphaVantageRequest {

	public:

		ULTOSC(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& time_period1 = "7", const std::string& time_period2 = "14", const std::string& time_period3 = "28", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~ULTOSC() = default;

	};
}
