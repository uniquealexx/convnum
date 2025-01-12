#ifndef HEXADECIMAL_CONVERTER_HPP
#define HEXADECIMAL_CONVERTER_HPP
#include "interface_converter.hpp"

class hexadecimal_converter final : public interface_converter{
public:
    virtual ~hexadecimal_converter() = default;

    std::string convert(int num) override;
};

#endif //HEXADECIMAL_CONVERTER_HPP
