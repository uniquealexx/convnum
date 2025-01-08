#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#define VERSION "0.1"

enum Args {
    ARG_NAME,
    ARG_MIN
};

class messages {
public:
    static void usage_message(const char* arg);
    static void help_message(const char* arg);
    static void version_message(const char* arg);
    static void complete_message(const char* arg);
};

#endif //MESSAGES_HPP
