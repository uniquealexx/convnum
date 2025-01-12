#ifndef DECIMAL_CONVERTER_HPP
#define DECIMAL_CONVERTER_HPP
#include "interface_converter.hpp"

class decimal_converter final : public interface_converter{
public:
    virtual ~decimal_converter() = default;

    std::string convert(int num) override;
};

#endif //DECIMAL_CONVERTER_HPP
