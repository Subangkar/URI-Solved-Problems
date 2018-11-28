//https://www.urionlinejudge.com.br/judge/en/problems/view/1871


#include <iostream>

using namespace std;

class strings
{
public:
	strings(int num1,int num2);
	~strings();

	void printSumExcludingZero();
private:
	char *numberExcludingZero = new char[11];
	char *numberIncludingZero = new char[11];
	int sum = 0;

#define EOS '\0' /// End of String

	int stringLength(char *str) // Including '\0'
	{
		int length = 0;

		while (*str++) // ||while(*str!=NULL && str++) // cont. loops until string finishes
		{
			length++;
		}

		return length;
	}
	void strRev(char *str)
	{
		char *temp = new char;

		for (int minIndex = 0, maxIndex = stringLength(str) - 1; minIndex < maxIndex; minIndex++, maxIndex--)
		{
			*temp = *(str + minIndex);
			*(str + minIndex) = *(str + maxIndex);
			*(str + maxIndex) = *temp;
		}
		delete temp;
	}
	char* numberToStringConverter(int32_t num)
	{
		int index = 0;
		char *numStr = new char[33];

		while (num != 0)
		{
			int thisDigit = num % 10;

			if (thisDigit != 0) // deter 0 from storing
			{
				*(numStr + index) = thisDigit + '0';

				index++;
			}		

			num /= 10;
		}

		*(numStr + index) = EOS; // End the String & not +1 cos index is already +1 by loop

		strRev(numStr); // Reversing After Making It A String

		return numStr;
	}

};


strings::strings(int num1, int num2)
{
	sum = num1 + num2;
}

strings::~strings()
{
	cout << endl;
	delete[] numberExcludingZero;
}

void strings::printSumExcludingZero()
{
	numberExcludingZero = numberToStringConverter(sum);

	cout << numberExcludingZero;
}

int main()
{
	int number1, number2;

	while (cin >> number1 >> number2 && (number1 && number2) != 0)
	{
		strings sum(number1, number2);

		sum.printSumExcludingZero();
	}

	return 0;
}