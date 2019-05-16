#include "technicalindicators.hpp"

using namespace alphavantage::req;

SMA::SMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("SMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

EMA::EMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("EMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

WMA::WMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("WMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

DEMA::DEMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("DEMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

TEMA::TEMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("TEMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

TRIMA::TRIMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("TRIMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

KAMA::KAMA(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("KAMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

T3::T3(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("T3", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

MAMA::MAMA(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastlimit, const std::string& slowlimit, const std::string& datatype)
	:IGenericRequest("MAMA", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_SERIES_TYPE] = series_type;
	params[API_FASTLIMIT] = fastlimit;
	params[API_SLOWLIMIT] = slowlimit;
	params[API_DATATYPE] = datatype;
}

VWAP::VWAP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
	:IGenericRequest("VWAP", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_DATATYPE] = datatype;
}

MACD::MACD(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& signalperiod, const std::string& datatype)
	:IGenericRequest("MACD", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_SERIES_TYPE] = series_type;
	params[API_FASTPERIOD] = fastperiod;
	params[API_SLOWPERIOD] = slowperiod;
	params[API_SIGNALPERIOD] = signalperiod;
	params[API_DATATYPE] = datatype;
}

MACDEXT::MACDEXT(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& signalperiod, const std::string& fastmatype, const std::string& slowmatype, const std::string& signalmatype, const std::string& datatype)
	:IGenericRequest("MACDEXT", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_SERIES_TYPE] = series_type;
	params[API_FASTPERIOD] = fastperiod;
	params[API_SLOWPERIOD] = slowperiod;
	params[API_SIGNALPERIOD] = signalperiod;
	params[API_FASTMATYPE] = fastmatype;
	params[API_SLOWMATYPE] = slowmatype;
	params[API_SIGNALMATYPE] = signalmatype;
	params[API_DATATYPE] = datatype;
}

STOCH::STOCH(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastkperiod, const std::string& slowkperiod, const std::string& slowdperiod, const std::string& slowkmatype, const std::string& slowdmatype, const std::string& datatype)
	:IGenericRequest("STOCH", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_FASTKPERIOD] = fastkperiod;
	params[API_SLOWKPERIOD] = slowkperiod;
	params[API_SLOWKMATYPE] = slowkmatype;
	params[API_SLOWDMATYPE] = slowdmatype;
	params[API_DATATYPE] = datatype;
}

STOCHF::STOCHF(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& fastkperiod, const std::string& fastdperiod, const std::string& fastdmatype, const std::string& datatype)
	:IGenericRequest("STOCHF", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_FASTKPERIOD] = fastkperiod;
	params[API_FASTDPERIOD] = fastdperiod;
	params[API_FASTDMATYPE] = fastdmatype;
	params[API_DATATYPE] = datatype;
}

RSI::RSI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("RSI", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

STOCHRSI::STOCHRSI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& fastkperiod, const std::string& fastdperiod, const std::string& fastdmatype, const std::string& datatype)
	:IGenericRequest("STOCHRSI", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_FASTKPERIOD] = fastkperiod;
	params[API_FASTDPERIOD] = fastdperiod;
	params[API_FASTDMATYPE] = fastdmatype;
	params[API_DATATYPE] = datatype;
}

WILLR::WILLR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("WILLR", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

ADX::ADX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("ADX", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

ADXR::ADXR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("ADXR", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

APO::APO(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& matype, const std::string& datatype)
	:IGenericRequest("APO", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_SERIES_TYPE] = series_type;
	params[API_FASTPERIOD] = fastperiod;
	params[API_SLOWPERIOD] = slowperiod;
	params[API_MATYPE] = matype;
	params[API_DATATYPE] = datatype;
}

PPO::PPO(const std::string& symbol, const std::string& interval, const std::string& series_type, const std::string& key, const std::string& fastperiod, const std::string& slowperiod, const std::string& matype, const std::string& datatype)
	:IGenericRequest("PPO", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_SERIES_TYPE] = series_type;
	params[API_FASTPERIOD] = fastperiod;
	params[API_SLOWPERIOD] = slowperiod;
	params[API_MATYPE] = matype;
	params[API_DATATYPE] = datatype;
}

MOM::MOM(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("MOM", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

BOP::BOP(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
	:IGenericRequest("BOP", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_DATATYPE] = datatype;
}

CCI::CCI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("CCI", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

CMO::CMO(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("CMO", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

ROC::ROC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("ROC", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

ROCR::ROCR(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("ROCR", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

AROON::AROON(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("AROON", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

AROONOSC::AROONOSC(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("AROONOSC", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

MFI::MFI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("MFI", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

TRIX::TRIX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("TRIX", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

ULTOSC::ULTOSC(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& time_period1, const std::string& time_period2, const std::string& time_period3, const std::string& datatype)
	:IGenericRequest("ULTOSC", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIMEPERIOD1] = time_period1;
	params[API_TIMEPERIOD2] = time_period2;
	params[API_TIMEPERIOD3] = time_period3;
	params[API_DATATYPE] = datatype;
}

DX::DX(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("DX", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

MINUS_DI::MINUS_DI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("MINUS_DI", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

PLUS_DI::PLUS_DI(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("PLUS_DI", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

MINUS_DM::MINUS_DM(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("MINUS_DM", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

PLUS_DM::PLUS_DM(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("PLUS_DM", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

BBANDS::BBANDS(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& nbdevup, const std::string& nbdevdn, const std::string& matype, const std::string& datatype)
	:IGenericRequest("BBANDS", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_NBDEVUP] = nbdevup;
	params[API_NBDEVDN] = nbdevdn;
	params[API_MATYPE] = matype;
	params[API_DATATYPE] = datatype;
}

MIDPOINT::MIDPOINT(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& series_type, const std::string& key, const std::string& datatype)
	:IGenericRequest("MIDPOINT", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_SERIES_TYPE] = series_type;
	params[API_DATATYPE] = datatype;
}

MIDPRICE::MIDPRICE(const std::string& symbol, const std::string& interval, const std::string& time_period, const std::string& key, const std::string& datatype)
	:IGenericRequest("MIDPRICE", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_TIME_PERIOD] = time_period;
	params[API_DATATYPE] = datatype;
}

SAR::SAR(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& acceleration, const std::string& maximum, const std::string& datatype)
	:IGenericRequest("SAR", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_ACCELERATION] = acceleration;
	params[API_MAXIMUM] = maximum;
	params[API_DATATYPE] = datatype;
}

TRANGE::TRANGE(const std::string& symbol, const std::string& interval, const std::string& key, const std::string& datatype)
	:IGenericRequest("TRANGE", key)
{
	params[API_SYMBOL] = symbol;
	params[API_INTERVAL] = interval;
	params[API_DATATYPE] = datatype;
}
