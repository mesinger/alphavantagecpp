#pragma once

#include "alphavantagecpp/api/AlphaVantageRequest.hpp"

namespace av {

	class SECTOR : public AlphaVantageRequest {

	public:

		SECTOR(const std::string& key);
		virtual ~SECTOR() = default;

	};
}
