#pragma once

#include "api/req/generic.hpp"

namespace alphavantage::req {

	class TIME_SERIES_INTRADAY : public IStockTimeSeries, PARAM_SYMBOL, PARAM_INTERVAL {

	public:

		TIME_SERIES_INTRADAY(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& outputsize = API_OUTPUTSIZE_COMPACT_STR, const std::string& datatype = API_DATATYPE_JSON_STR);
		virtual ~TIME_SERIES_INTRADAY() = default;

		virtual void load() const override;
		virtual std::string getUrl() const override;

	};
}
