/*
z -> a = 01 op
a -> z = 25 op
b -> a = (26 - 1) op

can't be operated in reverse way
*/

//https://www.urionlinejudge.com.br/judge/en/problems/view/1607

#include <iostream>

using namespace std;

class strings
{
public:
	~strings();

	void inputStringsFromConsole();
	void printNeededOperationDuringTransformationInFunction();

private:
	char *str1 = new char[10000];
	char *str2 = new char[10000];

	int sumofOperations = 0;

	void neededOperationDuringTransformation();
};

strings::~strings()
{
	cout << endl;
//	delete[] str1, str2;
}

void strings::inputStringsFromConsole()
{
	cin >> str1 >> str2;

}

void strings::neededOperationDuringTransformation()
{
	while (*str1)
	{
		if (*str2<*str1)
		{
			sumofOperations += 26 + *(str2)-*(str1);
			str1++, str2++;
			continue;
		}

		sumofOperations += *(str2) - *(str1);
		str1++, str2++;
	}
}

void strings::printNeededOperationDuringTransformationInFunction()
{
	neededOperationDuringTransformation();
	cout << sumofOperations;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		strings transform;
		transform.inputStringsFromConsole();
		transform.printNeededOperationDuringTransformationInFunction();
		counter++;
	}

	return 0;
}