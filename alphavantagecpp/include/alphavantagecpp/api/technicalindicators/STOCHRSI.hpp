#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class STOCHRSI : public AlphaVantageRequest {

	public:

		STOCHRSI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& fastkperiod = "5", const std::string& fastdperiod = "3", const std::string& fastdmatype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~STOCHRSI() = default;

	};
}
