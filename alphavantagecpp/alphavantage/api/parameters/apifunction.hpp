#pragma once

#include <string>

namespace alphavantage {
	namespace api {

		//this request requieres function parameter
		class IAPIParamFunction {

		public:

			explicit IAPIParamFunction(const std::string& function);
			virtual ~IAPIParamFunction() = default;

			virtual std::string getApiFunction() const;

		protected:

			std::string apiFunction;
		};
	}
}
