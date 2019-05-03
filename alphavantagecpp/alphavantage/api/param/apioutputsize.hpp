#pragma once

#include "genericparam.hpp"

//outputsize
#define API_OUTPUTSIZE_COMPACT 1
#define API_OUTPUTSIZE_FULL 2
#define API_OUTPUTSIZE_COMPACT_STR "compact"
#define API_OUTPUTSIZE_FULL_STR "full"

namespace alphavantage {
	namespace api {

		typedef int OUTPUTSIZE;

		//this request requieres outputsize parameter
		class IAPIParamOutputsize : public IAPIParam{

		public:

			explicit IAPIParamOutputsize(OUTPUTSIZE size);
			explicit IAPIParamOutputsize(const std::string& size);
			virtual ~IAPIParamOutputsize() = default;

			virtual OUTPUTSIZE getApiOutputsize() const;
			virtual std::string getApiOutputsizeStr() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			OUTPUTSIZE apiOutputsize;
			std::string apiOutputsizeString;

		private:

			std::string getApiOutputsizeAsString(OUTPUTSIZE datatype) const;
			DATATYPE getApiOutputsizeAsInt(const std::string& datatype) const;
		};
	}
}