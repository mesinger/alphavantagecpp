#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class NATR : public AlphaVantageRequest {

	public:

		NATR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~NATR() = default;

	};
}
