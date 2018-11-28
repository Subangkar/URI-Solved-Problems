//https://www.urionlinejudge.com.br/judge/en/problems/view/1761

/*
DONE ::
*/

/*
	.
	. .
	.   .
   h.    .
	.	  .
	.	 A .
	.............
	.  B    .
	.	    .C
	.	    .

	H =?

	H=h+C
*/


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define pi 3.141592654

class triangle
{
private:
	double angle = 0, base = 0, triangleHeight = 0, heightfromBase = 0, treeHeight = 0, wireLength = 0;

public:
	triangle() {

	}
	triangle(double A,double B,double C)
	{
		angle = A * pi / 180; //in radian
		base = B;
		heightfromBase = C;
	}

	~triangle()
	{
		cout << endl;
	}

	void calculateTriangleHeight();
	void calculateWireLength();
	void printWireLengthInConsole();
};

int main()
{
	double A = 0, B = 0, C = 0;

	while (cin >> A >> B >> C)
	{
		triangle trig(A, B, C);

		trig.calculateTriangleHeight();

		trig.calculateWireLength();

		trig.printWireLengthInConsole();
	}

	return 0;
}

void triangle::calculateTriangleHeight()
{
	triangleHeight = base * tan(angle);
}

void triangle::calculateWireLength()
{
	treeHeight = heightfromBase + triangleHeight;
	
	wireLength = 5 * treeHeight;
}

void triangle::printWireLengthInConsole()
{
	cout <<setprecision(2) << fixed << wireLength; //<< fixed(2)
}
