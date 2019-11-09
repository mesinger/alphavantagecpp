#include "alphavantagecpp/util/strings.hpp"
#include <algorithm>

bool av::util::string::containsPatterns(const std::string &target, const std::vector<std::string> &patterns,
                                        bool caseSensitive) {

    std::string targetCopy = target;

    if (!caseSensitive)
        std::transform(targetCopy.begin(), targetCopy.end(), targetCopy.begin(), ::tolower);

    for (const auto& pattern : patterns) {
        if (targetCopy.find(pattern) != std::string::npos)
            return true;
    }

    return false;
}

