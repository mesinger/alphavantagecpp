#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class MACDEXT : public AlphaVantageRequest {

	public:

		MACDEXT(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod = "12", const std::string& slowperiod = "26", const std::string& signalperiod = "9", const std::string& fastmatype = "0", const std::string& slowmatype = "0", const std::string& signalmatype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~MACDEXT() = default;

	};
}
