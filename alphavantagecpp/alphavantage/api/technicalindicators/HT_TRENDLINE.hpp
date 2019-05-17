#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class HT_TRENDLINE : public IGenericRequest {

	public:

		HT_TRENDLINE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~HT_TRENDLINE() = default;

	};
}
