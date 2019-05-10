#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class DIGITAL_CURRENCY_DAILY : public IGenericRequest {

	public:

		DIGITAL_CURRENCY_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key);
		virtual ~DIGITAL_CURRENCY_DAILY() = default;

	};
}
