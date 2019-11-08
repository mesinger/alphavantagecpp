#pragma once

#include <string>
#include <vector>
#include <algorithm>

namespace util {

	namespace string {

		/*
		checks if one of pattern
		is in s
		*/
		bool contains(const std::string& s, const std::vector<std::string>& patterns, bool caseSensitive = true) {

			std::string scp = s;

			if (!caseSensitive) {

				std::transform(scp.begin(), scp.end(), scp.begin(), ::tolower);
			}

			for (const auto& pattern : patterns) {

				if (scp.find(pattern) != std::string::npos)
					return true;
			}

			return false;
		}
	}
}