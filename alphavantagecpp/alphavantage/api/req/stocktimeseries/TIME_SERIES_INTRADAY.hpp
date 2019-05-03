#pragma once

#include "api/req/generic.hpp"

namespace alphavantage::req {

	class TIME_SERIES_INTRADAY : public IStockTimeSeries, PARAM_SYMBOL {

	public:

		TIME_SERIES_INTRADAY(const std::string& function, const std::string& symbol, const std::string& outputsize, const std::string& datatype, const std::string& key);
		virtual ~TIME_SERIES_INTRADAY() = default;

		virtual void load() const override;
		virtual std::string getUrl() const override;

	};
}
