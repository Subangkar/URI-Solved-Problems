//https://www.urionlinejudge.com.br/judge/en/problems/view/1323

#include <iostream>

using namespace std;

int add(register int x,register int y) // Using BitWise Operation
{
	int carry = 0;

	while (y != 0)
	{
		carry = x&y;

		x = x^y;

		y = carry << 1;
	}

	return x;
}

int add(int num1, int num2, int num3) // Using BitWise Operation
{
	return add(num1, add(num2, num3));
}

/* This Method returns square of given Number using bitwise operation */
int square(register int num)
{
	/*	If n is even, it can be written as
	n = 2*x // where x element of Natural Number
	n2 = (2*x)2 = 4*x2 // use loop

	so in loop num would be divided by 2 each time

	If n is odd, it can be written as
	n = 2*x + 1
	n2 = (2*x + 1)2 = 4*x2 + 4*x + 1
	*/


	if (num <= 1) // To Stop Recursion
	{
		if (num == 0) // Checking inside to optimize
		{
			return 0; // cos 0^2 = 0
		}

		return 1; // cos 1^2 = 1 
	}

	else if ((num & 1) == 0) // if even
	{
		register int sqOfNum = square(num >> 1) << 2; // sq of EVENnum = 4 * sq of ( half of EVENnum )

		return sqOfNum;
	}

	else // if odd
	{
		///			long sqOfNum = (square(num >> 1) << 2) + ((num >> 1) << 2) + 1; // sq of ODDnum = 4 * sq of ( half of ODDnum ) + 4*( half of ODDnum ) + 1
		// Brackets are must 
		register int sqOfNum = add((square(num >> 1) << 2), ((num >> 1) << 2), 1);

		return sqOfNum;
	}
}

int sumOfSquares(register int num)
{
	if (num == 0) // To Stop The Recursion
	{
		return 0;
	}

	register int sum = square(num);

	sum = add( sum , sumOfSquares(num-1) );

	return sum;
}

int main()
{
	register int sqPerGrid = 0;

	while (cin>>sqPerGrid && sqPerGrid!=0)
	{
		cout << sumOfSquares(sqPerGrid) << endl;
	}

	return 0;
}