#pragma once

#include <string>
#include <vector>

namespace av::util::string {
    bool containsPatterns(const std::string& target, const std::vector<std::string>& patterns);
}
