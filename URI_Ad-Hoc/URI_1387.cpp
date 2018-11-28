//https://www.urionlinejudge.com.br/judge/en/problems/view/1387

#include <iostream>

using namespace std;

int add(int num1,int num2)
{
	/*
	only both bit value = 1 then 1(carry) is passed to next bit by <<

	if  0+0=0
	1+0=1
	0+1=1
	1+1=0 carry 1
	like xor operation

	here
	=> first sum all bits by xor without calculating carry and save to num1
	=> then getting all carry at same time by
	*/

	while (num2 != 0)
	{
		register int carry = num1 & num2;

		num1 ^= num2;

		num2 = carry << 1;
	}

	return num1 ;
}

int main()
{
	register int a = 0, b = 0;
	
	while (cin >> a >> b && a != 0 && b != 0)
	{
		cout << add(a,b) << endl;
	}

	return 0;
}