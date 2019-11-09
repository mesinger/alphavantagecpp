#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class DIGITAL_CURRENCY_WEEKLY : public AlphaVantageRequest {

	public:

		DIGITAL_CURRENCY_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key);
		virtual ~DIGITAL_CURRENCY_WEEKLY() = default;

	};
}
