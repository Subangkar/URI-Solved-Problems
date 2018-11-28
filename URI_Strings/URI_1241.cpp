//https://www.urionlinejudge.com.br/judge/en/problems/view/1241
#include <iostream>

using namespace std;

class strings
{
private:
	char *source = new char[1000];
	char *target = new char[1000];

	int targetLength = 0;
	int targetIndex = 0;
	int sourceIndex = 0;
	int sourceLength = 0;
//	bool isRevFit = false;

	bool reverseSubString();
	int stringLength(char *str) // Including '\0'
	{
		int length = 0;

		while (*str++) // ||while(*str!=NULL && str++) // cont. loops until string finishes
		{
			length++;
		}

		return length;
	}

public:
	void inputNum()
	{
		cin >> target; // scan string untill space / enter
		cin >> source;
		
		targetLength = stringLength(target) - 1; // coz index start from 0
		sourceLength = stringLength(source) - 1;
	}

	void printResult()
	{
		if (reverseSubString() == true)
		{
			cout <<"encaixa" ;
		}
		else
		{
			cout << "nao encaixa";
		}
	}
	
	~strings()
	{
		delete[] target;
		delete[] source;

		cout << endl;
	}
};


bool strings::reverseSubString()
{
	if (targetLength < sourceLength)
	{
		return false;
	}

	targetIndex = targetLength;
	sourceIndex = sourceLength;

	while (sourceIndex>=0)
	{
		if ( *(target + targetIndex) != *(source + sourceIndex) )
		{
			return false;
		}

		targetIndex--, sourceIndex--;
	}

	return true;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		strings number;
		number.inputNum();
		number.printResult();
		counter++;
	}

	return 0;
}