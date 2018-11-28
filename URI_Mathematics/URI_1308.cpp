//https://www.urionlinejudge.com.br/judge/en/problems/view/1308


#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned long long int64_p;

class QuadEqn
{
public:
	QuadEqn(int64_t rightSide);

	int64_p posSolnOfQuadraticEqn()
	{
		return (int64_p)( (-b + sqrt(pow(b, 2) - ((a * c) << 2) ) ) / (a << 1) );
	}

private:
	int64_t a=1, b=1, c=0;
};

QuadEqn::QuadEqn(int64_t rightSide)
{
	c = -(rightSide << 1);
}


int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;
	int64_p totalWarriors = 0;

	while (counter <= testCase)
	{
		cin >> totalWarriors;

		QuadEqn Soilders(totalWarriors);

		cout << Soilders.posSolnOfQuadraticEqn() << endl;

		counter++;
	}

	return 0;
}
