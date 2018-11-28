//https://www.urionlinejudge.com.br/judge/en/problems/view/1238

#include <iostream>

using namespace std;

class strings
{
public:
	strings();
	~strings();

	void inputString();
	void printMergedString();

private:
	char *str1 = new char[50];
	char *str2 = new char[50];
	char *str = new char[100];

#define EOS '\0' // End of String
	int index = 0;

	void mashupString();

};

strings::strings()
{
}

strings::~strings()
{
	delete[] str;

	cout << endl;
}

void strings::inputString()
{
	cin >> str1;
	cin >> str2;
}

void strings::mashupString()
{
	index = 0;
	while (*str1 || *str2) // fill up the Even or first Indexes
	{
		if (*str1) // first try to assign string1's single char
		{
			*(str + index) = *str1;
			str1++;
			index++;
		}

		if (*str2) // Second try to assign string2's single char
		{
			*(str + index) = *str2;
			str2++;
			index++;
		}
	}
	*(str + index) = EOS; // Brings End To the merged String

//	delete[] str1, str2; /// to delete pointer must be pointed to its initial position
}

void strings::printMergedString()
{
	mashupString();
	cout << str;
}

int main()
{
	int testCase = 0;
	int counter = 1;

	cin >> testCase;

	while (counter<=testCase)
	{
		strings str;
		str.inputString();
		str.printMergedString();
		counter++;
	}

	return 0;
}