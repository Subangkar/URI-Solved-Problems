//https://www.urionlinejudge.com.br/judge/en/problems/view/1192

#include <iostream>

using namespace std;

inline bool digitsEqual(int first, int second)
{
	return (first == second ? true : false);
}

inline bool uppercase(char ch)
{
	return ( ('A' <= ch && ch <= 'Z') ? true : false );
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	int firstDigit = 0, secondDigit = 0;
	char operationMode = '\0';

	while (counter <= testCase)
	{
		cin >> firstDigit >> operationMode >> secondDigit;

		if (digitsEqual(firstDigit, secondDigit)) cout << (firstDigit*secondDigit) << endl;

		else cout << ( uppercase(operationMode) ? (secondDigit - firstDigit) : (secondDigit + firstDigit) ) << endl;

		counter++;
	}

	return 0;
}
