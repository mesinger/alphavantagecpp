#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class TIME_SERIES_WEEKLY_ADJUSTED : public AlphaVantageRequest {

	public:

		TIME_SERIES_WEEKLY_ADJUSTED(const std::string& symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TIME_SERIES_WEEKLY_ADJUSTED() = default;

	};
}
