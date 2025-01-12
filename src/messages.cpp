#include <iostream>
#include "../includes/messages.hpp"

void messages::usage_message(const char* arg) {
    std::cout << "Usage: " << arg << std::endl <<
        "[-h] or [--help] - Print this help message." << std::endl;
}

void messages::help_message(const char* arg) {
    std::cout << "Usage: " << arg << " -{dec, bin, oct, hex} num -{dec, bin, oct, hex}" << std::endl
              << "Convert a number from one numeral system to another." << std::endl
              << std::endl
              << "Options: " << std::endl
              << "  -h, --help       - Print this help message." << std::endl
              << "  -v, --version    - Print the program version." << std::endl
              << std::endl
              << "Supported numeral systems:" << std::endl
              << "  -dec             - Decimal (base 10)" << std::endl
              << "  -bin             - Binary (base 2)" << std::endl
              << "  -oct             - Octal (base 8)" << std::endl
              << "  -hex             - Hexadecimal (base 16)" << std::endl
              << std::endl
              << "Examples:" << std::endl
              << "  " << arg << " -dec 42 -hex" << std::endl
              << "  " << arg << " -bin 101010 -dec" << std::endl
              << "  " << arg << " -hex 2A -oct" << std::endl;
}

void messages::version_message(const char* arg) {
    std::cout << arg << " | version: " << VERSION << std::endl;
}

void messages::complete_message(const char* arg, const std::string& out) {
    std::cout << arg << " | complete: [" << out << "]"<< std::endl;
}
