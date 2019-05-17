#pragma once

#include "api/genericreq.hpp"

namespace alphavantage::req {

	class SECTOR : public IGenericRequest {

	public:

		SECTOR(const std::string& key);
		virtual ~SECTOR() = default;

	};
}
