//https://www.urionlinejudge.com.br/judge/en/problems/view/1379

#include <iostream>

using namespace std;

int add(int num1, int num2)
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

	while (num2!=0)
	{
		int carry = num1 & num2;

		num1 = num1 ^ num2;

		num2 = carry << 1;
	}

	return num1;
}

int sub(int num1, int num2)
{
	return add(num1, add(~num2, 1));
}

int main()
{
	int a=0,b=0;

	while (cin >> a >> b && a != 0 && b != 0)
	{
		cout << sub((a << 1), b) << endl;
	}

	return 0;
}