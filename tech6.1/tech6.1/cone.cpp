#include "cone.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.14159265358979323846
// Конструктор по умолчанию
Cone::Cone() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	r = 0.0;
	h = 0.0;
}

// Конструктор конуса с центром в начале координат
Cone::Cone(double r, double h) {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	this->r = r;
	this->h = h;
}

// Конструктор произвольного конуса
Cone::Cone(double x, double y, double z, double r, double h) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = r;
	this->h = h;
}

// Метод для ввода конуса
void Cone::input() {
	cout << "Введите координаты центра основания (x, y, z): ";
	cin >> x >> y >> z;
	cout << "Введите радиус основания: ";
	cin >> r;
	cout << "Введите высоту конуса: ";
	cin >> h;
}

// Метод для вывода конуса на экран
void Cone::output() {
	cout << "Конус с центром в (" << x << ", "<< y << ", " << z << ")" << std::endl;
	cout << "Радиус основания: " << r << std::endl;
	cout << "Высота конуса: " << h << std::endl;
}

// Метод для определения площади поверхности конуса
double Cone::surfaceArea() {
	double s = PI * r * (r + sqrt(pow(h, 2) + pow(r, 2)));
	return s;
}

// Метод для определения объёма конуса
double Cone::volume() {
	double v = (1.0 / 3.0) * PI * pow(r, 2) * h;
	return v;
};