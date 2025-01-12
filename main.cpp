#include <iostream>
#include <functional>
#include <map>
#include "includes/binary_converter.hpp"
#include "includes/decimal_converter.hpp"
#include "includes/hexadecimal_converter.hpp"
#include "includes/octal_converter.hpp"
#include "includes/messages.hpp"

int main(const int argc, char *argv[]) {
    if (argc <= 1) {
        messages::usage_message(argv[0]);
        exit(1);
    }

    std::map<std::string, std::function<int(const std::string&)>> to_decimal = {
        {"-dec", [](const std::string& num) { return std::stoi(num, nullptr, 10); }},
        {"-bin", [](const std::string& num) { return std::stoi(num, nullptr, 2); }},
        {"-oct", [](const std::string& num) { return std::stoi(num, nullptr, 8); }},
        {"-hex", [](const std::string& num) { return std::stoi(num, nullptr, 16); }},
    };

    std::map<std::string, std::function<std::string(int)>> from_decimal = {
        {"-dec", [](const int num) { return std::to_string(num); }},
        {"-bin", [](const int num) { return binary_converter().convert(num); }},
        {"-oct", [](const int num) { return octal_converter().convert(num); }},
        {"-hex", [](const int num) { return hexadecimal_converter().convert(num); }},
    };

    std::map<std::string, std::function<void()>> actions = {
        {"--help",    [&]() { messages::help_message(argv[0]); exit(0); }},
        {"-h",        [&]() { messages::help_message(argv[0]); exit(0); }},
        {"--version", [&]() { messages::version_message(argv[0]); exit(0); }},
        {"-v",        [&]() { messages::version_message(argv[0]); exit(0); }},
    };

    for (int i = 1; i < argc; ++i) {
        if (std::string arg = argv[i]; actions.contains(arg)) {
            actions[arg]();
            return 0;
        }
    }

    if (argc != 4) {
        messages::usage_message(argv[0]);
        exit(1);
    }

    const std::string from_base = argv[1];
    const std::string num = argv[2];
    const std::string to_base = argv[3];

    if (!to_decimal.contains(from_base) || !from_decimal.contains(to_base)) {
        messages::usage_message(argv[0]);
        exit(1);
    }

    const int decimal_num = to_decimal[from_base](num);
    const std::string result = from_decimal[to_base](decimal_num);

    std::cout << "Result: [" << result << "]." << std::endl;

    return 0;
}