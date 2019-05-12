#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class MACD : public IGenericRequest {

	public:

		MACD(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod = "12", const std::string& slowperiod = "26", const std::string& signalperiod = "9", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~MACD() = default;

	};
}
