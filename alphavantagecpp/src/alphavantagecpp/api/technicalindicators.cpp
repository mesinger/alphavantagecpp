#include "alphavantagecpp/api/technicalindicators/technicalindicators.hpp"

using namespace av;

SMA::SMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("SMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

EMA::EMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("EMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

WMA::WMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("WMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

DEMA::DEMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("DEMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

TEMA::TEMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TEMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

TRIMA::TRIMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TRIMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

KAMA::KAMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("KAMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

T3::T3(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("T3", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

MAMA::MAMA(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastlimit, const std::string& slowlimit, const std::string& datatype)
        :AlphaVantageRequest("MAMA", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_FASTLIMIT] = fastlimit;
    urlParams[API_SLOWLIMIT] = slowlimit;
    urlParams[API_DATATYPE] = datatype;
}

VWAP::VWAP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("VWAP", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_DATATYPE] = datatype;
}

MACD::MACD(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& signalperiod, const std::string& datatype)
        :AlphaVantageRequest("MACD", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_FASTPERIOD] = fastperiod;
    urlParams[API_SLOWPERIOD] = slowperiod;
    urlParams[API_SIGNALPERIOD] = signalperiod;
    urlParams[API_DATATYPE] = datatype;
}

MACDEXT::MACDEXT(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& signalperiod, const std::string& fastmatype, const std::string& slowmatype, const std::string& signalmatype, const std::string& datatype)
        :AlphaVantageRequest("MACDEXT", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_FASTPERIOD] = fastperiod;
    urlParams[API_SLOWPERIOD] = slowperiod;
    urlParams[API_SIGNALPERIOD] = signalperiod;
    urlParams[API_FASTMATYPE] = fastmatype;
    urlParams[API_SLOWMATYPE] = slowmatype;
    urlParams[API_SIGNALMATYPE] = signalmatype;
    urlParams[API_DATATYPE] = datatype;
}

STOCH::STOCH(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastkperiod, const std::string& slowkperiod, const std::string& slowdperiod, const std::string& slowkmatype, const std::string& slowdmatype, const std::string& datatype)
        :AlphaVantageRequest("STOCH", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_FASTKPERIOD] = fastkperiod;
    urlParams[API_SLOWKPERIOD] = slowkperiod;
    urlParams[API_SLOWKMATYPE] = slowkmatype;
    urlParams[API_SLOWDMATYPE] = slowdmatype;
    urlParams[API_DATATYPE] = datatype;
}

STOCHF::STOCHF(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastkperiod, const std::string& fastdperiod, const std::string& fastdmatype, const std::string& datatype)
        :AlphaVantageRequest("STOCHF", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_FASTKPERIOD] = fastkperiod;
    urlParams[API_FASTDPERIOD] = fastdperiod;
    urlParams[API_FASTDMATYPE] = fastdmatype;
    urlParams[API_DATATYPE] = datatype;
}

RSI::RSI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("RSI", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

STOCHRSI::STOCHRSI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& fastkperiod, const std::string& fastdperiod, const std::string& fastdmatype, const std::string& datatype)
        :AlphaVantageRequest("STOCHRSI", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_FASTKPERIOD] = fastkperiod;
    urlParams[API_FASTDPERIOD] = fastdperiod;
    urlParams[API_FASTDMATYPE] = fastdmatype;
    urlParams[API_DATATYPE] = datatype;
}

WILLR::WILLR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("WILLR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

ADX::ADX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("ADX", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

ADXR::ADXR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("ADXR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

APO::APO(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& matype, const std::string& datatype)
        :AlphaVantageRequest("APO", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_FASTPERIOD] = fastperiod;
    urlParams[API_SLOWPERIOD] = slowperiod;
    urlParams[API_MATYPE] = matype;
    urlParams[API_DATATYPE] = datatype;
}

PPO::PPO(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& matype, const std::string& datatype)
        :AlphaVantageRequest("PPO", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_FASTPERIOD] = fastperiod;
    urlParams[API_SLOWPERIOD] = slowperiod;
    urlParams[API_MATYPE] = matype;
    urlParams[API_DATATYPE] = datatype;
}

MOM::MOM(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("MOM", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

BOP::BOP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("BOP", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_DATATYPE] = datatype;
}

CCI::CCI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("CCI", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

CMO::CMO(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("CMO", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

ROC::ROC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("ROC", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

ROCR::ROCR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("ROCR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

AROON::AROON(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("AROON", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

AROONOSC::AROONOSC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("AROONOSC", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

MFI::MFI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("MFI", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

TRIX::TRIX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TRIX", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

ULTOSC::ULTOSC(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& time_period1, const std::string& time_period2, const std::string& time_period3, const std::string& datatype)
        :AlphaVantageRequest("ULTOSC", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIMEPERIOD1] = time_period1;
    urlParams[API_TIMEPERIOD2] = time_period2;
    urlParams[API_TIMEPERIOD3] = time_period3;
    urlParams[API_DATATYPE] = datatype;
}

DX::DX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("DX", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

MINUS_DI::MINUS_DI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("MINUS_DI", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

PLUS_DI::PLUS_DI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("PLUS_DI", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

MINUS_DM::MINUS_DM(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("MINUS_DM", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

PLUS_DM::PLUS_DM(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("PLUS_DM", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

BBANDS::BBANDS(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& nbdevup, const std::string& nbdevdn, const std::string& matype, const std::string& datatype)
        :AlphaVantageRequest("BBANDS", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_NBDEVUP] = nbdevup;
    urlParams[API_NBDEVDN] = nbdevdn;
    urlParams[API_MATYPE] = matype;
    urlParams[API_DATATYPE] = datatype;
}

MIDPOINT::MIDPOINT(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("MIDPOINT", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

MIDPRICE::MIDPRICE(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("MIDPRICE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

SAR::SAR(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& acceleration, const std::string& maximum, const std::string& datatype)
        :AlphaVantageRequest("SAR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_ACCELERATION] = acceleration;
    urlParams[API_MAXIMUM] = maximum;
    urlParams[API_DATATYPE] = datatype;
}

TRANGE::TRANGE(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("TRANGE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_DATATYPE] = datatype;
}

ATR::ATR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("ATR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

NATR::NATR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("NATR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_TIME_PERIOD] = time_period;
    urlParams[API_DATATYPE] = datatype;
}

AD::AD(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("AD", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_DATATYPE] = datatype;
}

ADOSC::ADOSC(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& datatype)
        :AlphaVantageRequest("ADOSC", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_FASTPERIOD] = fastperiod;
    urlParams[API_SLOWPERIOD] = slowperiod;
    urlParams[API_DATATYPE] = datatype;
}

OBV::OBV(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("OBV", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_DATATYPE] = datatype;
}

HT_TRENDLINE::HT_TRENDLINE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("HT_TRENDLINE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

HT_SINE::HT_SINE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("HT_SINE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

HT_TRENDMODE::HT_TRENDMODE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("HT_TRENDMODE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

HT_DCPERIOD::HT_DCPERIOD(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("HT_DCPERIOD", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

HT_DCPHASE::HT_DCPHASE(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("HT_DCPHASE", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}

HT_PHASOR::HT_PHASOR(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& datatype)
        :AlphaVantageRequest("HT_PHASOR", key)
{
    urlParams[API_SYMBOL] = symbol;
    urlParams[API_INTERVAL] = interval;
    urlParams[API_SERIES_TYPE] = series_type;
    urlParams[API_DATATYPE] = datatype;
}
