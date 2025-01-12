#include "../../includes/helper.hpp"

std::string helper::to_upper_str(const std::string &str) {
    if (str.empty()) {
        return str;
    }

    std::string result = str;
    result[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(result[0])));
    return result;
}
