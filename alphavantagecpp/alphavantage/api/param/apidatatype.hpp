#pragma once

#include "genericparam.hpp"

//datatype
#define API_DATATYPE_JSON 1
#define API_DATATYPE_CSV 2
#define API_DATATYPE_JSON_STR "json"
#define API_DATATYPE_CSV_STR "csv"

namespace alphavantage {
	namespace api {

		typedef int DATATYPE;

		//this request requieres datatype parameter
		class IAPIParamDatatype : public IAPIParam{

		public:

			explicit IAPIParamDatatype(const std::string& datatype);
			explicit IAPIParamDatatype(DATATYPE datatype);

			virtual ~IAPIParamDatatype() = default;

			virtual std::string getApiDatatypeStr() const;
			virtual DATATYPE getApiDatatype() const;

			virtual std::string getAsUrlParam() const override;

		protected:

			DATATYPE apiDatatype;
			std::string apiDataTypeString;

		private:

			std::string getApiDataTypeAsString(DATATYPE datatype) const;
			DATATYPE getApiDataTypeAsInt(const std::string& datatype) const;
		};
	}
}
