#pragma once

#include "generic.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres apikey parameter
		class IAPIParamApikey : public IAPIParam{

		public:

			explicit IAPIParamApikey(const std::string& key);
			virtual ~IAPIParamApikey() = default;

			virtual std::string getApiKey() const;

		protected:

			virtual std::string getAsUrlParam() const override;

			std::string apiKey;
		};
	}
}
