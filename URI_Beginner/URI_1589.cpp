
#include <iostream>

using namespace std;

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		int r1 = 0, r2 = 0;

		cin >> r1 >> r2;

		cout << r1+r2 << endl;

		counter++;
	}

	return 0;
}