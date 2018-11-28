//https://www.urionlinejudge.com.br/judge/en/problems/view/1397


#include <iostream>

using namespace std;

int main()
{
	int testCase = 0;
	int counter = 1;

	int A = 0, B = 0;
	int Acounter = 0;
	int Bcounter = 0;

	while (cin >> testCase && testCase != 0)
	{
		Acounter = 0;
		Bcounter = 0;
		counter = 0;

		while (counter++ < testCase && cin >> A >> B)
		{
			Acounter += (A > B) ? 1 : 0;

			Bcounter += (B > A) ? 1 : 0;
		}
		cout << Acounter << " " << Bcounter << endl;

	}

	return 0;
}