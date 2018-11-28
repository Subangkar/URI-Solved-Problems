//https://www.urionlinejudge.com.br/judge/en/problems/view/1253

/*
	while leftShift=10
	A -> Q by 'A' + 26 - 10
	else only +10
*/

/*Done*/

#include <iostream>

using namespace std;

class strings
{
public:
	~strings();

	void inputEncodedMessegeAndShiftDataFromConsole();
	void printDecodedMessegeInConsole();
private:
	char *encodedMsg = new char[50];
	int leftShiftValue = 0;

	void shiftChar2StepLeft();

};

strings::~strings()
{
	cout << endl;
	delete[] encodedMsg;
}

void strings::inputEncodedMessegeAndShiftDataFromConsole()
{
	cin >> encodedMsg >> leftShiftValue;
}

void strings::printDecodedMessegeInConsole()
{
	shiftChar2StepLeft();
	cout << encodedMsg;
}

void strings::shiftChar2StepLeft()
{
	if (leftShiftValue == 0) // To Optimize
	{
		return;
	}

	int index = 0; // to get string's length to delete pointer
	while (*(encodedMsg+index) ) // continues ['char','\0')
	{
		*(encodedMsg+index) -= leftShiftValue;
		if (*(encodedMsg+index) < 'A')
		{
			*(encodedMsg+index) += 26; // to wrap into A-Z again
		}
//		encodedMsg++;

		index++;
	}
//	encodedMsg -= index; // pointing to initial position again so that it can be deleted
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		strings decrypt;
		decrypt.inputEncodedMessegeAndShiftDataFromConsole();
		decrypt.printDecodedMessegeInConsole();

		counter++;
	} // destroys class when the curlyvace is closed from which it was called

	return 0;
}