#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class VWAP : public AlphaVantageRequest {

	public:

		VWAP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~VWAP() = default;

	};
}
