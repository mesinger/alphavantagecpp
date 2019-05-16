#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class ROC : public IGenericRequest {

	public:

		ROC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~ROC() = default;

	};
}
