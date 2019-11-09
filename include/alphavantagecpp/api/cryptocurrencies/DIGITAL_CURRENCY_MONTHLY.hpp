#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class DIGITAL_CURRENCY_MONTHLY : public AlphaVantageRequest {

	public:

		DIGITAL_CURRENCY_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key);
		virtual ~DIGITAL_CURRENCY_MONTHLY() = default;

	};
}
