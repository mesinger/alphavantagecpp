#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres apikey parameter
		class IAPIParamApikey : public IAPIParam{

		public:

			explicit IAPIParamApikey(const std::string& key);
			virtual ~IAPIParamApikey() = default;

			virtual std::string getApiKey() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiKey;
		};
	}
}
