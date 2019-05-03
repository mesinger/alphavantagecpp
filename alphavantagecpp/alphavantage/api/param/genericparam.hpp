#pragma once

#include <string>

namespace alphavantage::api {

	/*
	interface for every url param
	*/
	class IAPIParam {

	public:

		virtual std::string getAsUrlParam() const = 0;
	};
}
