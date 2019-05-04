#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres keywords parameter
		class IAPIParamKeywords : public IAPIParam {

		public:

			explicit IAPIParamKeywords(const std::string& keywords);
			virtual ~IAPIParamKeywords() = default;

			virtual std::string getApiKeywords() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiKeywords;
		};
	}
}
