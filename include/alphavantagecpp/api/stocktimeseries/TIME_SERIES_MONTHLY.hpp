#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class TIME_SERIES_MONTHLY : public AlphaVantageRequest {

	public:

		TIME_SERIES_MONTHLY(const std::string& symbol, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TIME_SERIES_MONTHLY() = default;

	};
}
