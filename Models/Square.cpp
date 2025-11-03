#include "Square.h"
#include <string>

Square::Square()
    : m_length(0), m_color("white") {
}

Square::Square(int length, std::string color)
    : m_length(length),
    m_color(std::move(color)) {
}

float Square::getArea() const {
    return (float)(m_length * m_length);
}

float Square::getPerimeter() const {
    return (float)(4 * m_length);
}

std::string Square::getColor() const {
    return m_color;
}

void Square::setColor(std::string color) {
    m_color = std::move(color);
}

void Square::setLength(int length) {
    m_length = length;
}
