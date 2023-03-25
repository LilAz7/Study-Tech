#include <cmath>
#include <iostream>

using namespace std;

class cone
{
private:
	const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726;
	double x, y, z;
	double R;
	double H;
public:
	cone()
	{
		x = 0;
		y = 0;
		z = 0;
		R = 0;
		H = 0;
	}
	cone(double r, double h)
	{
		x = 0;
		y = 0;
		z = 0;
		R = r;
		H = h;
	}
	cone(double X, double Y, double Z, double r, double h)
	{
		x = X;
		y = Y;
		z = Z;
		R = r;
		H = h;
	}

	void setCoordinate(double X, double Y, double Z);
	void setRadius(double r);
	void setHeight(double h);
	void getCoordinate(double& X, double& Y, double& Z);
	double getRadius();
	double getHeight();

	double area();
	double volume();

	friend ostream& operator<<(ostream& stream, cone obj);
};