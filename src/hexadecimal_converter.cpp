#include <sstream>
#include <iomanip>
#include "../includes/hexadecimal_converter.hpp"
#include "../includes/helper.hpp"

std::string hexadecimal_converter::convert(const int num) {
    std::ostringstream oss;
    oss << std::hex << num;
    std::string result = "0x" + helper::to_upper_str(oss.str());
    return result;
}
