#include <iostream>
#include <functional>
#include <map>
#include "includes/binary_converter.hpp"
#include "includes/decimal_converter.hpp"
#include "includes/hexadecimal_converter.hpp"
#include "includes/octal_converter.hpp"
#include "includes/messages.hpp"

int main(const int argc, char *argv[]) {
    if (argc <= ARG_MIN) {
        messages::usage_message(argv[ARG_NAME]);
        exit(1);
    }

    std::map<std::string, std::function<void()>> actions = {
        {"--help",    [&]() { messages::help_message(argv[ARG_NAME]); exit(0); }},
        {"-h",        [&]() { messages::help_message(argv[ARG_NAME]); exit(0); }},
        {"--version", [&]() { messages::version_message(argv[ARG_NAME]); exit(0); }},
        {"-v",        [&]() { messages::version_message(argv[ARG_NAME]); exit(0); }},
    };

    for (int i = 1; i < argc; ++i) {
        if (std::string arg = argv[i]; actions.contains(arg)) {
            actions[arg]();
            continue;
        }

        messages::usage_message(argv[ARG_NAME]);
        exit(1);
    }
}