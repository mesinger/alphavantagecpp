#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class TIME_SERIES_MONTHLY_ADJUSTED : public AlphaVantageRequest {

	public:

		TIME_SERIES_MONTHLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TIME_SERIES_MONTHLY_ADJUSTED() = default;

	};
}
