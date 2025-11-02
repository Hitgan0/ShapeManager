#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <string>

class Square : public Shape {
    private:
        int m_length;
        std::string m_color;

    public:
        Square();
    
        Square(int length, std::string color);
    
        float getArea() const override;

        float getPerimeter() const override;

        std::string getColor() const override;

        void setColor(std::string color) override;

        void setLength(int length);

        virtual ~Square() = default;
};

#endif