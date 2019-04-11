#pragma once

#include <string>

/*
defines for api parameters
*/

//interval
#define API_INTERVAL_1MIN 1
#define API_INTERVAL_5MIN 2
#define API_INTERVAL_15MIN 3
#define API_INTERVAL_30MIN 4
#define API_INTERVAL_60MIN 5

//outputsize
#define API_OUTPUTSIZE_COMPACT 1
#define API_OUTPUTSIZE_FULL 2

//datatype
#define API_DATATYPE_JSON 1
#define API_DATATYPE_CSV 2

typedef int API_INTERVAL;
typedef int API_OUTPUTSIZE;
typedef int API_DATATYPE;

/*
interfaces for api requests
*/
namespace alphavantage {
	namespace req {

		//this request requieres function parameter
		class IAPIParamFunction {
		public:
			virtual std::string getApiFunction() const { return apiFunction; }
		protected:
			std::string apiFunction;
		};

		//this request requieres symbol parameter
		class IAPIParamSymbol {
		public:
			virtual std::string getApiSymbol() const { return apiSymbol; }
		protected:
			std::string apiSymbol;
		};

		//this request requieres inteval parameter
		class IAPIParamInterval {
		public:
			virtual API_INTERVAL getApiInterval() const { return apiInterval; }
		protected:
			API_INTERVAL apiInterval;
		};

		//this request requieres outputsize parameter
		class IAPIParamOutputsize {
		public:
			virtual API_OUTPUTSIZE getApiOutputsize() const { return apiOutputsize; }
		protected:
			API_OUTPUTSIZE apiOutputsize;
		};

		//this request requieres datatype parameter
		class IAPIParamDatatype {
		public:
			virtual API_DATATYPE getApiDatatype() const { return apiDatatype; }
		protected:
			API_DATATYPE apiDatatype;
		};

		//this request requieres apikey parameter
		class IAPIParamApikey {
		public:
			virtual std::string getApiKey() const { return apiKey; }
		protected:
			std::string apiKey;
		};

		//this request requieres keywords parameter
		class IAPIParamKeywords {
		public:
			virtual std::string getApiKeywords() const { return apiKeywords; }
		protected:
			std::string apiKeywords;
		};
	}
}
