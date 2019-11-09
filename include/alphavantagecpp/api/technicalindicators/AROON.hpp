#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class AROON : public AlphaVantageRequest {

	public:

		AROON(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~AROON() = default;

	};
}
