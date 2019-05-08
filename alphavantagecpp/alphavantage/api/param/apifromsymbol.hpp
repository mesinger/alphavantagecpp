#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres from_symbol parameter
		class IAPIParamFromSymbol : public IAPIParam {

		public:

			explicit IAPIParamFromSymbol(const std::string& from_symbol);
			virtual ~IAPIParamFromSymbol() = default;

			virtual std::string getApiFromSymbol() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiFromSymbol;
		};
	}
}
