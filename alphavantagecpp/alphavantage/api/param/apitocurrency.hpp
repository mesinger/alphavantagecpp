#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres to_currency parameter
		class IAPIParamToCurrency : public IAPIParam {

		public:

			explicit IAPIParamToCurrency(const std::string& to_currency);
			virtual ~IAPIParamToCurrency() = default;

			virtual std::string getApiToCurrency() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiToCurrency;
		};
	}
}
