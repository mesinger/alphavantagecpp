#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class HT_DCPHASE : public IGenericRequest {

	public:

		HT_DCPHASE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~HT_DCPHASE() = default;

	};
}
