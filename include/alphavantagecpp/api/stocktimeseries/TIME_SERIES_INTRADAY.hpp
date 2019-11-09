#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class TIME_SERIES_INTRADAY : public AlphaVantageRequest {

	public:

		TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize = API_OUTPUTSIZE_COMPACT, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TIME_SERIES_INTRADAY() = default;

	};
}
