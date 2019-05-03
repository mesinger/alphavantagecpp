#pragma once

#include <string>

namespace alphavantage {
	namespace api {

		//this request requieres apikey parameter
		class IAPIParamApikey {

		public:

			explicit IAPIParamApikey(const std::string& key);
			virtual ~IAPIParamApikey() = default;

			virtual std::string getApiKey() const;

		protected:

			std::string apiKey;
		};
	}
}
