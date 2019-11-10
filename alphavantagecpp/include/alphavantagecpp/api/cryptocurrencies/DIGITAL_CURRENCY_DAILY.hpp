#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class DIGITAL_CURRENCY_DAILY : public AlphaVantageRequest {

	public:

		DIGITAL_CURRENCY_DAILY(const std::string& symbol, const std::string& market, const std::string& key);
		virtual ~DIGITAL_CURRENCY_DAILY() = default;

	};
}
