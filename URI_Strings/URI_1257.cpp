//https://www.urionlinejudge.com.br/judge/en/problems/view/1257

/* DONE :: */

#include <iostream>

using namespace std;

class Strings
{
public:
	Strings();
	~Strings();

	void scanElementNosAndStrings();

	void calcHashValue();

	void printThisCaseOutput();
private:
	int testCase = 0;

	char **str = NULL;
	int sumHash = 0;

	int elementNo=0;
	int thisElementLength = 0;
	int thisElementMaxIndex = 0;

	int strLength(const char *str)
	{
		int length = 0;

		while (*str++)	length++;

		return length;
	}
};

Strings::Strings()
{

}

Strings::~Strings()
{
}

void Strings::scanElementNosAndStrings()
{
	cin >> testCase;

	str = new char*[testCase];

	for (int element = 0; element < testCase; element++)
		str[element] = new char[51];

	for (int element = 0; element < testCase; element++)
		cin >> str[element];

	elementNo = 0;
}

void Strings::calcHashValue()
{
	int alphabetPosNos = 0;

	for (int elementNo = 0; elementNo < testCase; elementNo++)
	{
		thisElementLength = strLength(str[elementNo]);
		thisElementMaxIndex = thisElementLength - 1;

		alphabetPosNos = 0;

		sumHash += (elementNo * thisElementLength); // ( n*(n-1) )/2

		while ( str[elementNo][alphabetPosNos] )
		{
			sumHash += ( str[elementNo][alphabetPosNos] - 'A' ) + alphabetPosNos;

			alphabetPosNos++;
		}
	}
}

void Strings::printThisCaseOutput()
{
	cout << sumHash << endl;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		Strings array;

		array.scanElementNosAndStrings();

		array.calcHashValue();

		array.printThisCaseOutput();

		counter++;
	}

	return 0;
}