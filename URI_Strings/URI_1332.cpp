//https://www.urionlinejudge.com.br/judge/en/problems/view/1332

#include <iostream>

using namespace std;

int stringLength(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return length;
}

int numberString(char *num)
{
	int length = stringLength(num);

	if (length == 5)
	{
		return 3;
	}
	
	if ( (*num == 'o' && *(num + 1) == 'n') || (*num == 'o' && *(num + 2) == 'e') || (*(num + 1) == 'n' && *(num + 2) == 'e') )
	{
		return 1;
	}

	return 2;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		char *number = new char[6];

		cin >> number;

		cout << numberString(number) << endl;

		counter++;
	}

	return 0;
}