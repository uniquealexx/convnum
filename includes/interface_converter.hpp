#ifndef INTERFACE_CONVERTER_HPP
#define INTERFACE_CONVERTER_HPP
#include <string>

class interface_converter {
protected:
    ~interface_converter() = default;

public:
    virtual std::string convert(int num) = 0;
};

#endif //INTERFACE_CONVERTER_HPP
