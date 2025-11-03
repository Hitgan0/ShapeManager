#include <iostream>
#include "./Models/Square.h"
#include "./Models/Triangle.h"

int main() {
    Square s{2, "Red"};
    std::cout << "Square Info:" << std::endl;
    std::cout << "  Area: " << s.getArea() << std::endl;
    std::cout << "  Perimeter: " << s.getPerimeter() << std::endl;
    std::cout << "  Color: " << s.getColor() << std::endl;

    Triangle t{2, 2, 2, 2, "Blue"};
    std::cout << "Triangle Info:" << std::endl;
    std::cout << "  Area: " << t.getArea() << std::endl;
    std::cout << "  Perimeter: " << t.getPerimeter() << std::endl;
    std::cout << "  Color: " << t.getColor() << std::endl;
    return 0;
}