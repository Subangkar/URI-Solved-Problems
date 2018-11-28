//https://www.urionlinejudge.com.br/judge/en/problems/view/1300

#include <iostream>

using namespace std;

int main()
{
	int givenDegValue = 0;

	while (cin >> givenDegValue)
	{
		if (givenDegValue % 6 == 0)
		{
			cout << "Y";
		}
		else
		{
			cout << "N";
		}

		cout << endl;
	}

	return 0;
}