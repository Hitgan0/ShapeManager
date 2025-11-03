#include "Triangle.h"
#include <string>

Triangle::Triangle()
    : m_base(0),
    m_height(0),
    m_side1(0),
    m_side2(0), 
    m_color("white") {
}

Triangle::Triangle(int base, int height, int side1, int side2, std::string color)
    : m_base(base),
    m_height(height),
    m_side1(side1),
    m_side2(side2),
    m_color(std::move(color)) {
}

float Triangle::getArea() const {
    return (float)((m_base * m_height) / 2);
}

float Triangle::getPerimeter() const {
    return (float)(m_base + m_side1 + m_side2);
}

std::string Triangle::getColor() const {
    return m_color;
}

void Triangle::setColor(std::string color) {
    m_color = std::move(color);
}

void Triangle::setBase(int base) {
    m_base = base;
}

void Triangle::setHeight(int height) {
    m_height = height;
}

void Triangle::setSide1(int side1) {
    m_side1 = side1;
}

void Triangle::setSide2(int side2) {
    m_side2 = side2;
}
