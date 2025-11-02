#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {    
    public:
        virtual float getArea() const = 0;
        virtual float getPerimeter() const = 0;
        virtual std::string getColor() const = 0;
        virtual void setColor(std::string color) = 0;
        virtual ~Shape() = default;
};

#endif