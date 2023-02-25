#include "triangle.h"
#include <iostream>

int main() {

	Triangle triangles[3] = {
		Triangle(3.0,4.0,5.0),
		Triangle(5.0,12.0,13.0),
		Triangle(7.0,8.0,11.0)
	};

	for (int i=0; i < 3; i++) {
		std::cout << "Triangle " << i + 1 << std::endl;
		std::cout << "Perimeter: " << triangles[i].getPerimeter() << std::endl;
		std::cout << "Area: " << triangles[i].getArea() << std::endl;
	}
	return 0;
}