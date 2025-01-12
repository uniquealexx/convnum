#ifndef BINARY_CONVERTER_HPP
#define BINARY_CONVERTER_HPP
#include "interface_converter.hpp"

class binary_converter final : public interface_converter{
public:
    virtual ~binary_converter() = default;

    std::string convert(int num) override;
};

#endif //BINARY_CONVERTER_HPP
