#pragma once

#include "generic.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres symbol parameter
		class IAPIParamSymbol : public IAPIParam{

		public:

			explicit IAPIParamSymbol(const std::string& symb);
			virtual ~IAPIParamSymbol() = default;

			virtual std::string getApiSymbol() const;

		protected:

			virtual std::string getAsUrlParam() const override;

			std::string apiSymbol;
		};
	}
}
