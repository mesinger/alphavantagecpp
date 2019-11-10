#include "alphavantagecpp/util/strings.hpp"
#include <algorithm>

bool av::util::string::containsPatterns(const std::string &target, const std::vector<std::string> &patterns) {

    std::string targetLowerCase = target;
    std::transform(targetLowerCase.begin(), targetLowerCase.end(), targetLowerCase.begin(), ::tolower);

    for (const auto& pattern : patterns) {

        auto patternLowerCase = pattern;
        std::transform(patternLowerCase.begin(), patternLowerCase.end(), patternLowerCase.begin(), ::tolower);

        if (targetLowerCase.find(patternLowerCase) != std::string::npos)
            return true;
    }

    return false;
}

