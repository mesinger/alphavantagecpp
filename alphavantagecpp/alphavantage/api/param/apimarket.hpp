#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres market parameter
		class IAPIParamMarket : public IAPIParam {

		public:

			explicit IAPIParamMarket(const std::string& market);
			virtual ~IAPIParamMarket() = default;

			virtual std::string getApiMarket() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiMarket;
		};
	}
}
