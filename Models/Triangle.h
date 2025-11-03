#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <string>

class Triangle : public Shape {
    private:
        int m_base;
        int m_height;
        int m_side1;
        int m_side2;
        std::string m_color;

    public:
        Triangle();
    
        Triangle(int base, int height, int side1, int side2, std::string color);
    
        float getArea() const override;

        float getPerimeter() const override;

        std::string getColor() const override;

        void setColor(std::string color) override;

        void setBase(int base);

        void setHeight(int height);

        void setSide1(int side1);

        void setSide2(int side2);

        virtual ~Triangle() = default;
};

#endif