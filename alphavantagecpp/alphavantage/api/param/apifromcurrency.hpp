#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres from_currency parameter
		class IAPIParamFromCurrency : public IAPIParam {

		public:

			explicit IAPIParamFromCurrency(const std::string& from_currency);
			virtual ~IAPIParamFromCurrency() = default;

			virtual std::string getApiFromCurrency() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiFromCurrency;
		};
	}
}
