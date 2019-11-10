#include "catch.hpp"
#include "alphavantage.hpp"
#include <iostream>

void logResponse(const std::string& apicall, const std::optional<std::string>& response) {
    std::cout << apicall << "\n" << response.value_or("Response was empty") << "\n\n";
}

TEST_CASE("time series intraday", "[request]") {
    auto req = av::TIME_SERIES_INTRADAY("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_INTRADAY", rsp);
}

TEST_CASE("time series daily", "[request]") {
    auto req = av::TIME_SERIES_DAILY("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_DAILY", rsp);
}

TEST_CASE("time series daily adjusted", "[request]") {
    auto req = av::TIME_SERIES_DAILY_ADJUSTED("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_DAILY_ADJUSTED", rsp);
}

TEST_CASE("time series weekly", "[request]") {
    auto req = av::TIME_SERIES_WEEKLY("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_WEEKLY", rsp);
}

TEST_CASE("time series weekly adjusted", "[request]") {
    auto req = av::TIME_SERIES_WEEKLY_ADJUSTED("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_WEEKLY_ADJUSTED", rsp);
}

TEST_CASE("time series monthly", "[request]") {
    auto req = av::TIME_SERIES_MONTHLY("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_MONTHLY", rsp);
}

TEST_CASE("time series monthly adjusted", "[request]") {
    auto req = av::TIME_SERIES_MONTHLY_ADJUSTED("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TIME_SERIES_MONTHLY_ADJUSTED", rsp);
}

TEST_CASE("quote endpoint", "[request]") {
    auto req = av::Quote_Endpoint("AAPL", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("Quote_Endpoint", rsp);
}

TEST_CASE("search endpoint", "[request]") {
    auto req = av::Search_Endpoint("App", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("Search_Endpoint", rsp);
}

TEST_CASE("exchange rate", "[request]") {
    auto req = av::CURRENCY_EXCHANGE_RATE("EUR", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("CURRENCY_EXCHANGE_RATE", rsp);
}

TEST_CASE("fx intraday", "[request]") {
    auto req = av::FX_INTRADAY("EUR", "USD", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("FX_INTRADAY", rsp);
}

TEST_CASE("fx daily", "[request]") {
    auto req = av::FX_DAILY("EUR", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("FX_DAILY", rsp);
}

TEST_CASE("fx weekly", "[request]") {
    auto req = av::FX_WEEKLY("EUR", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("FX_WEEKLY", rsp);
}

TEST_CASE("fx monthly", "[request]") {
    auto req = av::FX_MONTHLY("EUR", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("FX_MONTHLY", rsp);
}

TEST_CASE("digital currency daily", "[request]") {
    auto req = av::DIGITAL_CURRENCY_DAILY("BTC", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("DIGITAL_CURRENCY_DAILY", rsp);
}

TEST_CASE("digital currency weekly", "[request]") {
    auto req = av::DIGITAL_CURRENCY_WEEKLY("BTC", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("DIGITAL_CURRENCY_WEEKLY", rsp);
}

TEST_CASE("digital currency monthly", "[request]") {
    auto req = av::DIGITAL_CURRENCY_MONTHLY("BTC", "USD", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("DIGITAL_CURRENCY_MONTHLY", rsp);
}

TEST_CASE("sma", "[request]") {
    auto req = av::SMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("SMA", rsp);
}

TEST_CASE("ema", "[request]") {
    auto req = av::EMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("EMA", rsp);
}

TEST_CASE("wma", "[request]") {
    auto req = av::WMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("WMA", rsp);
}

TEST_CASE("dema", "[request]") {
    auto req = av::DEMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("DEMA", rsp);
}

TEST_CASE("tema", "[request]") {
    auto req = av::TEMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TEMA", rsp);
}

TEST_CASE("trima", "[request]") {
    auto req = av::TRIMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TRIMA", rsp);
}

TEST_CASE("kama", "[request]") {
    auto req = av::KAMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("KAMA", rsp);
}

TEST_CASE("mama", "[request]") {
    auto req = av::MAMA("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MAMA", rsp);
}

TEST_CASE("vwap", "[request]") {
    auto req = av::VWAP("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("VWAP", rsp);
}

TEST_CASE("t3", "[request]") {
    auto req = av::T3("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("T3", rsp);
}

TEST_CASE("macd", "[request]") {
    auto req = av::MACD("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MACD", rsp);
}

TEST_CASE("macdext", "[request]") {
    auto req = av::MACDEXT("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MACDEXT", rsp);
}

TEST_CASE("stoch", "[request]") {
    auto req = av::STOCH("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("STOCH", rsp);
}

TEST_CASE("stochf", "[request]") {
    auto req = av::STOCHF("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("STOCHF", rsp);
}

TEST_CASE("rsi", "[request]") {
    auto req = av::RSI("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("RSI", rsp);
}

TEST_CASE("stochrsi", "[request]") {
    auto req = av::STOCHRSI("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("STOCHRSI", rsp);
}

TEST_CASE("willr", "[request]") {
    auto req = av::WILLR("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("WILLR", rsp);
}

TEST_CASE("adx", "[request]") {
    auto req = av::ADX("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ADX", rsp);
}

TEST_CASE("adxr", "[request]") {
    auto req = av::ADXR("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ADXR", rsp);
}

TEST_CASE("apo", "[request]") {
    auto req = av::APO("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("APO", rsp);
}

TEST_CASE("ppo", "[request]") {
    auto req = av::PPO("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("PPO", rsp);
}

TEST_CASE("mom", "[request]") {
    auto req = av::MOM("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MOM", rsp);
}

TEST_CASE("bop", "[request]") {
    auto req = av::BOP("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("BOP", rsp);
}

TEST_CASE("cci", "[request]") {
    auto req = av::CCI("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("CCI", rsp);
}

TEST_CASE("cmo", "[request]") {
    auto req = av::CMO("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("CMO", rsp);
}

TEST_CASE("roc", "[request]") {
    auto req = av::ROC("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ROC", rsp);
}

TEST_CASE("rocr", "[request]") {
    auto req = av::ROCR("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ROCR", rsp);
}

TEST_CASE("aroon", "[request]") {
    auto req = av::AROON("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("AROON", rsp);
}

TEST_CASE("aroonosc", "[request]") {
    auto req = av::AROONOSC("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("AROONOSC", rsp);
}

TEST_CASE("mfi", "[request]") {
    auto req = av::MFI("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MFI", rsp);
}

TEST_CASE("trix", "[request]") {
    auto req = av::TRIX("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TRIX", rsp);
}

TEST_CASE("ultosc", "[request]") {
    auto req = av::ULTOSC("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ULTOSC", rsp);
}

TEST_CASE("dx", "[request]") {
    auto req = av::DX("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("DX", rsp);
}

TEST_CASE("minus di", "[request]") {
    auto req = av::MINUS_DI("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MINUS_DI", rsp);
}

TEST_CASE("plus di", "[request]") {
    auto req = av::PLUS_DI("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("PLUS_DI", rsp);
}

TEST_CASE("minus dm", "[request]") {
    auto req = av::MINUS_DM("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MINUS_DM", rsp);
}

TEST_CASE("plus dm", "[request]") {
    auto req = av::PLUS_DM("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("PLUS_DM", rsp);
}

TEST_CASE("bbands", "[request]") {
    auto req = av::BBANDS("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("BBANDS", rsp);
}

TEST_CASE("midpoint", "[request]") {
    auto req = av::MIDPOINT("AAPL", "15min", "60", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MIDPOINT", rsp);
}

TEST_CASE("midprice", "[request]") {
    auto req = av::MIDPRICE("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("MIDPRICE", rsp);
}

TEST_CASE("sar", "[request]") {
    auto req = av::SAR("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("SAR", rsp);
}

TEST_CASE("trange", "[request]") {
    auto req = av::TRANGE("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("TRANGE", rsp);
}

TEST_CASE("atr", "[request]") {
    auto req = av::ATR("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ATR", rsp);
}

TEST_CASE("natr", "[request]") {
    auto req = av::NATR("AAPL", "15min", "60", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("NATR", rsp);
}

TEST_CASE("ad", "[request]") {
    auto req = av::AD("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("AD", rsp);
}

TEST_CASE("adosc", "[request]") {
    auto req = av::ADOSC("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("ADOSC", rsp);
}

TEST_CASE("obv", "[request]") {
    auto req = av::OBV("AAPL", "15min", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("OBV", rsp);
}

TEST_CASE("ht trendline", "[request]") {
    auto req = av::HT_TRENDLINE("AAPL", "15min", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("HT_TRENDLINE", rsp);
}

TEST_CASE("ht sine", "[request]") {
    auto req = av::HT_SINE("AAPL", "15min", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("HT_SINE", rsp);
}

TEST_CASE("ht trendmode", "[request]") {
    auto req = av::HT_TRENDMODE("AAPL", "15min", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("HT_TRENDMODE", rsp);
}

TEST_CASE("ht dcperiod", "[request]") {
    auto req = av::HT_DCPERIOD("AAPL", "15min", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("HT_DCPERIOD", rsp);
}

TEST_CASE("ht dcphase", "[request]") {
    auto req = av::HT_DCPHASE("AAPL", "15min", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("HT_DCPHASE", rsp);
}

TEST_CASE("ht phasor", "[request]") {
    auto req = av::HT_PHASOR("AAPL", "15min", "close", API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("HT_PHASOR", rsp);
}

TEST_CASE("sector", "[request]") {
    auto req = av::SECTOR(API_KEY);
    auto rsp = req.fetch();
    REQUIRE(rsp.has_value());
    logResponse("SECTOR", rsp);
}
