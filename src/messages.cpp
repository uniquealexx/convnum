#include "../includes/messages.hpp"

#include <iostream>

void messages::usage_message(const char* arg) {
    std::cout << "Usage: " << arg << std::endl <<
        "[-h] or [--help] - Print this help message." << std::endl;
}

void messages::help_message(const char* arg) {
    std::cout << "Usage: " << arg << std::endl <<
        "Options: " << std::endl <<
            "[-h] or [--help] - Print this help message." << std::endl;
}

void messages::version_message(const char* arg) {
    std::cout << arg << " version: " << VERSION << std::endl;
}

void messages::complete_message(const char *arg) {
    std::cout << "complete: [" << std::endl;
}
