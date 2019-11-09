#include "alphavantagecpp/api/cryptocurrencies/cryptocurrencies.hpp"

using namespace av;

DIGITAL_CURRENCY_DAILY::DIGITAL_CURRENCY_DAILY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
        :AlphaVantageRequest("DIGITAL_CURRENCY_DAILY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_MARKET] = market;
}

DIGITAL_CURRENCY_WEEKLY::DIGITAL_CURRENCY_WEEKLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
        :AlphaVantageRequest("DIGITA_CURRENCY_WEEKLY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_MARKET] = market;
}

DIGITAL_CURRENCY_MONTHLY::DIGITAL_CURRENCY_MONTHLY(const std::string& from_symbol, const std::string& to_symbol, const std::string& market, const std::string& key)
        :AlphaVantageRequest("DIGITAL_CURRENCY_MONTHLY", key)
{
    urlParams[API_FROM_SYMBOL] = from_symbol;
    urlParams[API_TO_SYMBOL] = to_symbol;
    urlParams[API_MARKET] = market;
}
