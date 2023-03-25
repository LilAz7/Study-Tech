#include <iostream>
#include "subcone.h"

using namespace std;

void subcone::setCoordinate(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void subcone::setRadius(double r)
{
	R = r;
}
void subcone::setHeight(double h, double subh)
{
	H = h;
	subH = subh;
}

void subcone::getCoordinate(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double subcone::getRadius()
{
	return R;
}
double subcone::getHeight(double& h, double& subh)
{
	h = H;
	subh = subH;
	return 0;
}

double subcone::area()
{
	return (PI * R * (R + sqrt(H * H + R * R)) - PI * R * (R + sqrt((H - subH) * (H - subH) + R * R)));
}
double subcone::volume()
{
	return (PI * R * R * H / 3) - (PI * R * R * (H - subH) / 3);
}

ostream& operator<< (ostream& stream, const subcone& obj)
{
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r = " << obj.R << " ";
	stream << "H = " << obj.H << " ";
	stream << "h = " << obj.subH << " ";
	return stream;
}
istream& operator>> (istream& stream, subcone& obj)
{
	stream >> obj.x;
	stream >> obj.y;
	stream >> obj.z;
	stream >> obj.R;
	stream >> obj.H;
	stream >> obj.subH;
	return stream;
}