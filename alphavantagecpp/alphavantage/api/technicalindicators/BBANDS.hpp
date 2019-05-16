#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class BBANDS : public IGenericRequest {

	public:

		BBANDS(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& nbdevup = "2", const std::string& nbdevdn = "2", const std::string& matype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~BBANDS() = default;

	};
}
