#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class CURRENCY_EXCHANGE_RATE : public AlphaVantageRequest {

	public:

		CURRENCY_EXCHANGE_RATE(const std::string& from_currency, const std::string& to_currency, const std::string& key);
		virtual ~CURRENCY_EXCHANGE_RATE() = default;

	};
}
