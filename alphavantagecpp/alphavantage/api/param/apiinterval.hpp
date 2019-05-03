#pragma once

#include <string>

//interval
#define API_INTERVAL_1MIN 1
#define API_INTERVAL_5MIN 2
#define API_INTERVAL_15MIN 3
#define API_INTERVAL_30MIN 4
#define API_INTERVAL_60MIN 5
#define API_INTERVAL_1MIN_STR "1min"
#define API_INTERVAL_5MIN_STR "2min"
#define API_INTERVAL_15MIN_STR "15min"
#define API_INTERVAL_30MIN_STR "30min"
#define API_INTERVAL_60MIN_STR "60min"

namespace alphavantage {
	namespace api {

		typedef int INTERVAL;

		//this request requieres inteval parameter
		class IAPIParamInterval {

		public:

			explicit IAPIParamInterval(INTERVAL interval);
			explicit IAPIParamInterval(const std::string& interval);

			virtual ~IAPIParamInterval() = default;

			virtual std::string getApiIntervalStr() const;
			virtual INTERVAL getApiInterval() const;

		protected:

			INTERVAL apiInterval;
			std::string apiIntervalString;

		private:

			std::string getApiIntervalAsString(INTERVAL interval) const;
			INTERVAL getApiIntervalAsInt(const std::string& interval) const;
		};
	}
}