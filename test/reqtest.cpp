#include "catch.hpp"
#include "alphavantage.hpp"
#include <iostream>

TEST_CASE("time series daily", "[request]") {
    auto req = av::TIME_SERIES_DAILY("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
}

