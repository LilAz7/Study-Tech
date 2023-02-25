#include "circle.h"
#include <iostream>

int main() {
    double radius, x_center, y_center;
    std::cout << "Enter radius, x_center, and y_center for circle 1: ";
    std::cin >> radius >> x_center >> y_center;
    Circle circle1(radius, x_center, y_center);

    std::cout << "Area of circle 1: " << circle1.getArea() << std::endl;

    double a, b, c;
    std::cout << "Enter the sides of the triangle for checking if circle 1 is inscribed and circumscribed: ";
    std::cin >> a >> b >> c;
    std::cout << "Is circle 1 inscribed in the triangle? " << std::boolalpha << circle1.isInscribed(a, b, c) << std::endl;
    std::cout << "Is circle 1 circumscribed about the triangle? " << std::boolalpha << circle1.isCircumscribed(a, b, c) << std::endl;

    double r, x_cntr, y_cntr;
    std::cout << "Enter the radius, x coordinate, and y coordinate for circle 2: ";
    std::cin >> r >> x_cntr >> y_cntr;
    Circle circle2(r, x_cntr, y_cntr);

    std::cout << "Do circle 1 and circle 2 intersect? " << std::boolalpha << circle1.isIntersected(a, b, c) << std::endl;

    return 0;
}