#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres to_symbol parameter
		class IAPIParamToSymbol : public IAPIParam {

		public:

			explicit IAPIParamToSymbol(const std::string& to_symbol);
			virtual ~IAPIParamToSymbol() = default;

			virtual std::string getApiToSymbol() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiToSymbol;
		};
	}
}
