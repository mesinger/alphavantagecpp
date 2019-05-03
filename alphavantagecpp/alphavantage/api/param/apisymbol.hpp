#pragma once

#include "genericparam.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres symbol parameter
		class IAPIParamSymbol : public IAPIParam{

		public:

			explicit IAPIParamSymbol(const std::string& symb);
			virtual ~IAPIParamSymbol() = default;

			virtual std::string getApiSymbol() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			std::string apiSymbol;
		};
	}
}
