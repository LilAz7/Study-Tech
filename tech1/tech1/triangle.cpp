#include "triangle.h"
#include <cmath>

Triangle::Triangle(double a, double b, double c) {

	if (a + b > c && a + c > b && b + c > a) {
		sideA = a;
		sideB = b;
		sideC = c;
	}
	else {
		sideA = sideB = sideC = 0;
	}


}

double Triangle::getPerimeter() {
	return sideA + sideB + sideC;
}

double Triangle::getArea() {
	double s = (sideA + sideB + sideC) / 2.0;
	return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));

}

