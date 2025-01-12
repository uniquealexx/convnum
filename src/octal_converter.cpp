#include <sstream>
#include <iomanip>
#include "../includes/octal_converter.hpp"

std::string octal_converter::convert(const int num) {
    std::ostringstream oss;
    oss << std::oct << num;
    std::string result = "0o" + oss.str() + " or simply " + oss.str();
    return result;
}
