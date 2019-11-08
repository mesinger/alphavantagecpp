#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class HT_PHASOR : public IGenericRequest {

	public:

		HT_PHASOR(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~HT_PHASOR() = default;

	};
}
