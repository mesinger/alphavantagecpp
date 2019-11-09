#pragma once

#include <tuple>
#include <string>

// <response, szResponse, httpRspCode>
typedef std::tuple<std::string, uint32_t, uint16_t> HttpResponse;
