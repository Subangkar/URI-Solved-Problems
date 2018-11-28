//https://www.urionlinejudge.com.br/judge/en/problems/view/1743

#include <iostream>

using namespace std;

int main()
{
	int output[10];

	for (size_t i = 0; i < 10; i++) cin >> output[i]; // scan done

	for (size_t i1 = 0, i2 = 5; i1 < 5; i1++, i2++)
		if (output[i1] == output[i2])
		{
			cout << 'N' << endl;
			return 0;
		}

	cout << 'Y' << endl;

	return 0;
}