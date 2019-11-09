#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class AROONOSC : public AlphaVantageRequest {

	public:

		AROONOSC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~AROONOSC() = default;

	};
}
