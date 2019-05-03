#pragma once

#include "generic.hpp"

namespace alphavantage {
	namespace api {

		//this request requieres function parameter
		class IAPIParamFunction : public IAPIParam{

		public:

			explicit IAPIParamFunction(const std::string& function);
			virtual ~IAPIParamFunction() = default;

			virtual std::string getApiFunction() const;

		protected:

			virtual std::string getAsUrlParam() const override;

			std::string apiFunction;
		};
	}
}
