//https://www.urionlinejudge.com.br/judge/en/problems/view/1273


/* DONE */

/*
4
LONGEST
A
LONG
SHORT

Result must be printed in such a way so that All names last char must be in same colm ::

LONGEST
	  A
   LONG
  SHORT
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

class strings
{
public:
	strings(int16_t totalName);
	~strings();

	void scanNamesFromConsole();
	void getTheLengthOfNames();
	void findOutTheMaxNameLength();
	void getTheDifferenceOfEachNamesLengthWithMax();
	void printTheNamesInConsoleWithNeededSpaceBeforeThem();

private:
	int16_t totalCase = 0;

	string *name = NULL;
	int16_t *nameLength = NULL;
	int16_t *nameLengthDiffwithMax = NULL;

	int16_t maxLength = 0;
	
};

strings::strings(int16_t totalName)
{
	totalCase = totalName;

	name = new string[totalCase];
	nameLength = new int16_t[totalCase];
	nameLengthDiffwithMax = new int16_t[totalCase];
}

strings::~strings()
{
//	cout << endl;
	delete[] name,nameLength,nameLengthDiffwithMax;
}


void strings::scanNamesFromConsole()
{
	for (int personIndex = 0; personIndex < totalCase; personIndex++)
	{
		getline(cin,*(name + personIndex));
	}
}

void strings::getTheLengthOfNames()
{

	for (int16_t personIndex = 0; personIndex < totalCase; personIndex++)
	{
		nameLength[personIndex] = name[personIndex].length();
	}

}

void strings::findOutTheMaxNameLength() // Get the Max Length To Calc Difference with it
{
	for (int16_t personIndex = 0; personIndex < totalCase; personIndex++)
	{
		if (nameLength[personIndex] > maxLength)
		{
			maxLength = nameLength[personIndex];
		}
	}

}

void strings::getTheDifferenceOfEachNamesLengthWithMax()
{
	for (int16_t personIndex = 0; personIndex < totalCase; personIndex++)
	{
		nameLengthDiffwithMax[personIndex] = maxLength - nameLength[personIndex];
	}

}

void strings::printTheNamesInConsoleWithNeededSpaceBeforeThem()
{
	for (int16_t personIndex = 0; personIndex < totalCase; personIndex++) // switch between persons
	{
		for (int16_t space = 1; space <= nameLengthDiffwithMax[personIndex]; space++) // print spaces in a line
		{
			cout << " ";
		}
		cout << name[personIndex] << endl;
	}
}


int main()
{
	int16_t testCase = 0;
	cin >> testCase;

	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clearing The Buffer

	while ( true )
	{

		strings names(testCase);

		names.scanNamesFromConsole();

		names.getTheLengthOfNames();

		names.findOutTheMaxNameLength();

		names.getTheDifferenceOfEachNamesLengthWithMax();

		names.printTheNamesInConsoleWithNeededSpaceBeforeThem();

		cin >> testCase;
		if (testCase == 0)
		{
			break;
		}
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clearing The Buffer

		cout << endl;

	}

	return 0;
}