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
