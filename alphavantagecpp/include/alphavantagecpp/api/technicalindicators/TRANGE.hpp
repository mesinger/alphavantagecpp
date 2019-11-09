#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class TRANGE : public AlphaVantageRequest {

	public:

		TRANGE(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype = API_DATATYPE_JSON);
		virtual ~TRANGE() = default;

	};
}
