#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class HT_TRENDMODE : public AlphaVantageRequest {

	public:

		HT_TRENDMODE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~HT_TRENDMODE() = default;

	};
}
