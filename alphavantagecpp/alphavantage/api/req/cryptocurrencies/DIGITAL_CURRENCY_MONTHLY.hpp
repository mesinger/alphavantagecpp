#pragma once

#include "api/req/genericreq.hpp"

namespace alphavantage::req {

	class DIGITAL_CURRENCY_MONTHLY : public IGenericRequest {

	public:

		DIGITAL_CURRENCY_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key);
		virtual ~DIGITAL_CURRENCY_MONTHLY() = default;

	};
}
