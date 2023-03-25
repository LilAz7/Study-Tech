#include "cone.h"

void cone::setCoordinate(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void cone::setRadius(double r)
{
	R = r;
}
void cone::setHeight(double h)
{
	H = h;
}
void cone::getCoordinate(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double cone::getRadius()
{
	return R;
}
double cone::getHeight()
{
	return H;
}

double cone::area()
{
	return PI * R * (R + sqrt(H * H + R * R));
}
double cone::volume()
{
	return PI * R * R * H / 3;
}

ostream& operator<<(ostream& stream, cone obj)
{
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r = " << obj.R << " ";
	stream << "h = " << obj.H << "";
	return stream;
}