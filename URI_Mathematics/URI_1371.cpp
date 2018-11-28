//https://www.urionlinejudge.com.br/judge/en/problems/view/1371


/* DONE */

/* The Result of This Problem is 
::: show squares untill its (square's) value is <= inputNum 

if number of rooms=4 then >4 doesn't exist
	so calc will be upto 4
coz ::
1 toogles :: 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19...............(so all opens)
2 toggles ::   2   4   6   8   10    12    14    16    18   ...............(so these goes off)
3 toggles ::     3     6     9       12       15       18   ...............(so thse goes off except 6,12 & out of(2*3) multiples)
4 toogles ::       4       8         12          16			...............(so upto 4 only 1 & 4 is open )


*/

#include <iostream>

using namespace std;

typedef unsigned long long int64_p;


int64_p add(int64_p num1, int64_p num2) // okay
{
	int64_p carry = 0;

	while (num2) // when there is no carry sum is done
	{
		carry = (num1 & num2); // store carry bits

		num1 ^= num2; // store sum(Xcept carry) to num1 

		num2 = (carry << 1); // passing this bit's carry to next bit
	}

	return num1;
}

int64_p add(int64_p num1, int64_p num2, int64_p num3)
{
	return add( add(num1, num2) , num3);
}

int64_p square(int64_p num) // prob
{
	// n^2 = 4x^2
	// n^2 = (2x+1)^2 = 4x^2 + 4x + 1

	if (num == 0) return 0;

	else if (num & 1) // if odd
		num = add( ((square(num >> 1)) << 2) , ((num >> 1) << 2) , 1);

	else // if even
		num = square(num >> 1) << 2;

	return num;
}


void printSquaresUptoNum(int64_p num)
{
	cout << "1";

	int thisNum = 2;
	int64_p sqNum = 0;

	while ( (sqNum=square(thisNum))<= num) // ( (sqNum=square(thisNum) ) && sqNum <= num)
	{
		cout << " " << sqNum;
		thisNum++;
	}
}

int main()
{
	int64_p lastRoomNos = 0;

	while (cin >> lastRoomNos && lastRoomNos!=0)
	{
		printSquaresUptoNum(lastRoomNos);

		cout << endl;
	}

	return 0;
}