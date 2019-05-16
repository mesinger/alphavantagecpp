#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class APO : public IGenericRequest {

	public:

		APO(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod = "12", const std::string& slowperiod = "26", const std::string& matype = "0", const std::string& datatype = API_DATATYPE_JSON);
		virtual ~APO() = default;

	};
}