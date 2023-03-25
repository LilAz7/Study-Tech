#include "cone.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.14159265358979323846
// ����������� �� ���������
Cone::Cone() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	r = 0.0;
	h = 0.0;
}

// ����������� ������ � ������� � ������ ���������
Cone::Cone(double r, double h) {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	this->r = r;
	this->h = h;
}

// ����������� ������������� ������
Cone::Cone(double x, double y, double z, double r, double h) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = r;
	this->h = h;
}

// ����� ��� ����� ������
void Cone::input() {
	cout << "������� ���������� ������ ��������� (x, y, z): ";
	cin >> x >> y >> z;
	cout << "������� ������ ���������: ";
	cin >> r;
	cout << "������� ������ ������: ";
	cin >> h;
}

// ����� ��� ������ ������ �� �����
void Cone::output() {
	cout << "����� � ������� � (" << x << ", "<< y << ", " << z << ")" << std::endl;
	cout << "������ ���������: " << r << std::endl;
	cout << "������ ������: " << h << std::endl;
}

// ����� ��� ����������� ������� ����������� ������
double Cone::surfaceArea() {
	double s = PI * r * (r + sqrt(pow(h, 2) + pow(r, 2)));
	return s;
}

// ����� ��� ����������� ������ ������
double Cone::volume() {
	double v = (1.0 / 3.0) * PI * pow(r, 2) * h;
	return v;
};