#include <iostream>
#include "Math.h"
#include <string>

class HW
{
private:
	std::string a = "HomeWork #17" ;

public:

	void Show()
	{
		std::cout << a << "\n";
	}
};

class Vector
{
public:
	Vector() : x(0), y(0), z(0)
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}

	void Length()
	{
		double x2 = x * x;
		double y2 = y * y;
		double z2 = z * z;
		double L = sqrt(x2 + y2 + z2);
		std::cout << "\n" << "Vector Length =" << L << "\n";
	}

	void Show()
	{
		std::cout << "\n" << "Coordinates (x,y,z):" << x << ',' << y << ',' << z << "\n";
	}

private:
	double x;
	double y;
	double z;
};

int main()
{
	HW str;
	Vector v(1,2,3);
	str.Show();
	v.Show();
	v.Length();
}