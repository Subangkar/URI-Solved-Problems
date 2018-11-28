//https://www.urionlinejudge.com.br/judge/en/problems/view/1457

/*
	DONE ::
*/

/*
4 ! = 4 * (3-1K) * (2-2K) * (1-3K) , K=1 
4 !!= 4 * (3-1K) * (2-2K) * (1-3K) , K=2
*/

#include <iostream>

using namespace std;

typedef unsigned long long int64_p;

size_t strLen(char *str)
{
	size_t len = 0;
	while (*str++) len++;
	return len;
}

int64_p factorTotal(int num,int factor);

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	int num = 0;
	char *slash = new char[21];

	while (counter <= testCase)
	{
		cin >> num >> slash;

		cout << factorTotal(num, strLen(slash)) << endl;

		counter++;
	}

	return 0;
}

int64_p factorTotal(int num, int factor)
{
	int64_p mult = num;

	for (int k = 1;; k++)
	{
		int temp = (num - k * factor);

		if (temp <= 1) break;

		mult *= temp;
	}

	return mult;
}
