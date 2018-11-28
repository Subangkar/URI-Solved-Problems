//https://www.urionlinejudge.com.br/judge/en/problems/view/1039

/*
	if the flower circle can be entirely surrounded by the hunter's circle
	only then the flower can be captured... and its true if
	=> if fl is intra circle of hunter's
	=> both circle are same

	if
	=> (R1 - r2) is >= center dist Circle with r is intra circle of Circle with R
*/

#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14156;

struct Point
{
	int x;
	int y;

	/* This Operator returns the distane between operand two Points */
	double operator - (Point SecondP)
	{
		return sqrt( pow(this->x - SecondP.x, 2) + pow(this->y - SecondP.y, 2) );
	}
};

struct Circle
{
	Point center;
	int radius;

	double area();
};

double Circle::area()
{
	return (pi*pow(radius, 2));
}

bool isCovered(Circle hunter, Circle flower)
{
	double centerDist = hunter.center - flower.center;

	if ((hunter.radius - flower.radius) >= centerDist)
	{
		return true;
	}

	return false;
}

int main()
{
	Circle flower, hunter;

	while (cin >> hunter.radius >> hunter.center.x >> hunter.center.y >> flower.radius >> flower.center.x >> flower.center.y)
	{
		if (isCovered(hunter,flower))
		{
			cout << "RICO";
		}
		else
		{
			cout << "MORTO";
		}

		cout << endl;
	}

	return 0;
}