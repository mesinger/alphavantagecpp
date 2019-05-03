#pragma once

#include <string>

namespace alphavantage {
	namespace api {

		//this request requieres symbol parameter
		class IAPIParamSymbol {

		public:

			explicit IAPIParamSymbol(const std::string& symb);
			virtual ~IAPIParamSymbol() = default;

			virtual std::string getApiSymbol() const;

		protected:

			std::string apiSymbol;
		};
	}
}
