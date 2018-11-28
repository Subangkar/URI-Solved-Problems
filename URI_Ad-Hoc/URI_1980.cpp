//https://www.urionlinejudge.com.br/judge/en/problems/view/1980

#include <iostream>

using namespace std;

typedef unsigned long long int64_p;


size_t strLength(const char *str)
{
	int length = 0;

	while (*str++) length++;

	return length;
}


int64_p factorial(int64_p num)
{
	if (num == 0) return 1;

	int64_p factValue = num * factorial(num - 1);

	return factValue;
}


int main()
{
	char *num = new char[16];
	size_t length = 0;

	while (cin>>num && *num!='0')
	{
		cout << factorial(strLength(num)) << endl;
	}

	return 0;
}