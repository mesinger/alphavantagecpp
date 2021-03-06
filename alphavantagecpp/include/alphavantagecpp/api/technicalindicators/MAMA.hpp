#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class MAMA : public AlphaVantageRequest {

	public:

		MAMA(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastlimit = "0.01", const std::string& slowlimit = "0.01", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~MAMA() = default;

	};
}
