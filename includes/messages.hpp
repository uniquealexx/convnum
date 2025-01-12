#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#define VERSION "0.2"

enum Args {
    ARG_NAME,
    ARG_TO_BASE,
    ARG_NUM,
    ARG_FROM_BASE
};

class messages {
public:
    static void usage_message(const char* arg);
    static void help_message(const char* arg);
    static void version_message(const char* arg);
    static void complete_message(const char* arg, const std::string& out);
};

#endif //MESSAGES_HPP
