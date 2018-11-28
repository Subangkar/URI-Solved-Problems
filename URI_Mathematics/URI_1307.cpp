//https://www.urionlinejudge.com.br/judge/en/problems/view/1307

/* DONE */

/*
Given Two Number In Binary Format
If there is any common num to build two nums then True
*/

#include <iostream>

using namespace std;

typedef unsigned long long int64_p;

int GCD(int num1, int num2)
{
	int largeNum = num1, smallNum = num2;

	if (num1 < num2) {
		largeNum = num2;
		smallNum = num1;
	}

	int temp = 1;

	while (temp != 0)
	{
		temp = largeNum % smallNum;

		largeNum = smallNum;
		smallNum = temp;
	}

	int GCDValue = largeNum;

	return GCDValue;
}

int binaryToDecimal(int64_p binary)
{
	int bitValue = 0;
	int bitPos = 0;

	int decimal = 0;

	while (binary > 0)
	{
		bitValue = (binary & 1); // %2

		decimal += ( bitValue << bitPos );

		bitPos++;

		binary /= 10;
	}

	return decimal;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	int64_p num1 = 0, num2 = 0;
	while (counter <= testCase)
	{
		cin >> num1 >> num2;

		num1 = binaryToDecimal(num1);
		num2 = binaryToDecimal(num2);

		if (GCD(num1, num2)!=1) {
			cout << "Pair #" << counter << ": All you need is love!" << endl;
		}
		else
		{
			cout << "Pair #" << counter << ": Love is not all you need!" << endl;
		}
		counter++;
	}

	return 0;
}