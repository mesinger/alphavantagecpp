#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::api {

	class SECTOR : public IGenericRequest {

	public:

		SECTOR(const std::string& key);
		virtual ~SECTOR() = default;

	};
}
