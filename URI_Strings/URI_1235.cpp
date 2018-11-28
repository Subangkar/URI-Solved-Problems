//https://www.urionlinejudge.com.br/judge/en/problems/view/1235

/*
DONE :::

A String Given ::
 1st Half will be reversed
 2nd Half will be reversed
 Then Two Part will be merged
*/

#include <iostream>
#include <limits> // to clear buffer

using namespace std;

int stringLength(char *str) // Including '\0'
{
	int length = 0;

	while (*str++) // ||while(*str!=NULL && str++) // cont. loops until string finishes
	{
		length++;
	}

	return length;
}

char* strRev(char *str, int minIndex, int maxIndex) // reverse from minIndex to maxIndex range
{
	if (minIndex >= maxIndex) { return str; }
	
	*(str + minIndex) ^= *(str + maxIndex);
	*(str + maxIndex) ^= *(str + minIndex);
	*(str + minIndex) ^= *(str + maxIndex);
	
	strRev(str, minIndex+1, maxIndex-1);

	return str;
}

int main()
{
	int testCase = 0;
	cin >> testCase;

	cin.clear(); // To clear the buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int secondHalfStartIndex = 0;
	int secondHalfStopIndex = 0;
	char * disOrderedSent = new char[102];

	int counter = 1;
	while (counter <= testCase)
	{
		cin.getline(disOrderedSent, 101);

		secondHalfStopIndex = stringLength(disOrderedSent) - 1;
		secondHalfStartIndex = (secondHalfStopIndex + 1) >> 1;

		strRev(disOrderedSent, 0, secondHalfStartIndex - 1);
		strRev(disOrderedSent, secondHalfStartIndex, secondHalfStopIndex);

		cout << disOrderedSent << endl;

		counter++;
	}

	delete[] disOrderedSent;
	return 0;
}