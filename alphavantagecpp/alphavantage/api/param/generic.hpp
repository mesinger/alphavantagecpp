#pragma once

#include <string>

namespace alphavantage::api {

	/*
	interface for every url param
	*/
	class IAPIParam {

	protected:

		virtual std::string getAsUrlParam() const = 0;
	};
}
