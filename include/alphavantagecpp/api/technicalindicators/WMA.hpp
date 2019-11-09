#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class WMA : public AlphaVantageRequest {

	public:

		WMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~WMA() = default;

	};
}
