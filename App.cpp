#include <iostream>
#include "./Models/Square.h"

int main() {
    Square s{};
    std::cout << "Area: " << s.getArea() << std::endl;
    std::cout << "Perimeter: " << s.getPerimeter() << std::endl;
    std::cout << "Color: " << s.getColor() << std::endl;

    return 0;
}