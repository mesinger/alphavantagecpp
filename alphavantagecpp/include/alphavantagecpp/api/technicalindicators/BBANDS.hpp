#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class BBANDS : public AlphaVantageRequest {

	public:

		BBANDS(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& nbdevup = "2", const std::string& nbdevdn = "2", const std::string& matype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~BBANDS() = default;

	};
}
