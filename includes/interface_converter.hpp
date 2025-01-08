#ifndef INTERFACE_CONVERTER_HPP
#define INTERFACE_CONVERTER_HPP

class interface_converter {
public:
    virtual ~interface_converter() = default;

    virtual int convert(int num);
    virtual float convert(float num);
    virtual void convert(char* num);
};

#endif //INTERFACE_CONVERTER_HPP
