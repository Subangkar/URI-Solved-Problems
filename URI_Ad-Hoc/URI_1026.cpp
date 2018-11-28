//https://www.urionlinejudge.com.br/judge/en/problems/view/1026

#include <iostream>

using namespace std;

int main()
{
	unsigned long num1, num2;

	while (cin>>num1>>num2)
	{
		cout << (num1^num2) << endl;
	}

	return 0;
}