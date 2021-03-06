# alphavantagecpp
Cross platform C++ 17 wrapper for [Alpha Vantage](https://www.alphavantage.co)

## Design goals
alphavantagecpp is designed to work like the [official API documentation](https://www.alphavantage.co/documentation/) of Alpha Vantage. Naming of functions and parameters are exactly as mentioned in the documentation. All optional parameters have their corresponding default values.

## Integration
```c++
#include "alphavantage.hpp"
```
* network communication is implemented with [cURL](https://curl.haxx.se/libcurl/), so you will have to link their library to your project.<br>
* unit testing with [Catch2](https://github.com/catchorg/Catch2) (the tests will not work with a free API key, as those are restricted to 5 API calls / minute)

## Usage
With [nlohmann/json](https://github.com/nlohmann/json) you could do something like this.
```c++
// builds request object and sets the requiered parameters
auto request = av::TIME_SERIES_DAILY("AAPL", "apikey");

// sends the response to alphavantage and returns the json/csv response as an optional string
std::optional<std::string> response = request.fetch();

if (response) {

	auto jsonData = nlohmann::json::parse(response);

	for (const auto& entry : jsonData["Time Series (Daily)"]) {

		std::cout << entry["1. open"] << std::endl;
	}
}
```
