#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class CURRENCY_EXCHANGE_RATE : public IGenericRequest {

	public:

		CURRENCY_EXCHANGE_RATE(const std::string& from_currency, const std::string& to_currency, const std::string& key);
		virtual ~CURRENCY_EXCHANGE_RATE() = default;

	};
}
