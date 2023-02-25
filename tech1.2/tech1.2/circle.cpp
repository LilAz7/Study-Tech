#include "circle.h"
#include <cmath>

Circle::Circle(double r, double x, double y) {
    radius = r;
    x_center = x;
    y_center = y;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return PI * pow(radius, 2);
}

bool Circle::isCircumscribed(double a, double b, double c) const {
    double s = (a + b + c) / 2;
    double R = (a * b * c) / (4 * sqrt(s * (s - a) * (s - b) * (s - c)));
    return radius == R;
}

bool Circle::isInscribed(double a, double b, double c) const {
    double s = (a + b + c) / 2;
    double r = sqrt((s - a) * (s - b) * (s - c) / s);
    return radius == r;
}

bool Circle::isIntersected(double r, double x_cntr, double y_cntr) const {
    double dist = sqrt(pow(x_center - x_cntr, 2) + pow(y_center - y_cntr, 2));
    return dist < radius + r;
}