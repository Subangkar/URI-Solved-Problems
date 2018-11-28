
#include <iostream>


using namespace std;

int main()
{
	int testCase = 0;

	while (cin >> testCase && testCase!=0)
	{
		register int16_t input = 3;
		register int counter = 0;

		register int zeroCounter = 0;
		register int oneCounter = 0;

		while (counter++ < testCase && cin >> input)
		{
			if (input == 0)
			{
				zeroCounter++;
				continue;
			}
			oneCounter++;
		}

		cout << "Mary won " << zeroCounter << " times and John won " << oneCounter << " times" << endl;

	}

	return 0;
}