# alphavantagecpp
Cross platform C++ 17 wrapper for [Alphavantage](https://www.alphavantage.co)

## Design goals
alphavantagecpp is designed to work like the [official API documentation](https://www.alphavantage.co/documentation/) of Alphavantage. Naming of functions and parameters are exactly as mentioned in the documentation. All optional parameters have their corresponding default values.

## Integration
```c++
#include "alphavantage.hpp"
```
network communication is implemented with [cURL](https://curl.haxx.se/libcurl/), so you will have to link their library to your project.

## Usage
With [nlohmann/json](https://github.com/nlohmann/json) you could do something like this.
```c++
// builds request object and sets the requiered parameters
auto request = av::TIME_SERIES_DAILY("AAPL", "apikey");

// sends the response to alphavantage and returns the json/csv response as string
std::optional<std::string> response = req.fetch();

if (response) {

	auto jsonData = nlohmann::json::parse(response);

	for (const auto& entry : jsonData["Time Series (Daily)"]) {

		std::cout << entry["1. open"] << std::endl;
	}
}
```
