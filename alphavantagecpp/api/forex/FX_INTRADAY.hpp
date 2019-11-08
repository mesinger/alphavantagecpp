#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class FX_INTRADAY : public IGenericRequest {

	public:

		FX_INTRADAY(const std::string& from_symbol, const std::string& to_symbol, const std::string& interval, const std::string& key, const std::string& outputsize = API_OUTPUTSIZE_COMPACT, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~FX_INTRADAY() = default;

	};
}
