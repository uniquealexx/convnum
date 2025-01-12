#ifndef OCTAL_CONVERTER_HPP
#define OCTAL_CONVERTER_HPP
#include "interface_converter.hpp"

class octal_converter final : public interface_converter {
public:
    virtual ~octal_converter() = default;

    std::string convert(int num) override;
};

#endif //OCTAL_CONVERTER_HPP
