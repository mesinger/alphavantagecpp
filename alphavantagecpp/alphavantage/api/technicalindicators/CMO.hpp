#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class CMO : public IGenericRequest {

	public:

		CMO(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~CMO() = default;

	};
}