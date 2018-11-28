
#include <iostream>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	if (num2 > num1)
	{
		num1 = num2;
	}

	cout << num1 << endl;

	return 0;
}