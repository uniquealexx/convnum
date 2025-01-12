#include <string>
#include "../includes/binary_converter.hpp"

std::string binary_converter::convert(int num) {
    std::string binary;
    while (num > 0) {
        binary.insert(0, std::to_string(num % 2));
        num /= 2;
    }
    return binary.empty() ? "0" : binary;
}
