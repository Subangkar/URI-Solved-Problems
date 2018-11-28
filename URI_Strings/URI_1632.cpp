//https://www.urionlinejudge.com.br/judge/en/problems/view/1632

/*
each char can be used in 2 form
except	A,E,I,O,S = 3 form

DONE :: BUT CAN BE OPTIMIZED ::
	get how much 3 bearer are here then total = 2^(strlength-3bearer) - 3^(3bearer)
*/


#include <iostream>

using namespace std;

class Transform
{
public:
	Transform();
	~Transform();

	void scanTextFromConsole();

	int calcTotalGenerateAblePasswords();

	void printTotalGentPasswordsInConsole();

private:
	char *password = new char[17];
	int totalPass = 1;

	void makeLowerCase(char *str)
	{
		while (*str)
		{
			if ('A' <= *str && *str <= 'Z')
			{
				*str += 32;
			}
			str++;
		}
	}

	int availableForms(char alphabet)
	{
		switch (alphabet)
		{
		case 'a':
			return 3;
		case 'e':
			return 3;
		case 'i':
			return 3;
		case 'o':
			return 3;
		case 's':
			return 3;
		default:
			return 2;
		}
	}

};

Transform::Transform()
{
}

Transform::~Transform()
{
	cout << endl;
}

void Transform::scanTextFromConsole()
{
	cin >> password;

	makeLowerCase(password);
}

int Transform::calcTotalGenerateAblePasswords()
{
	while (*password)
	{
		totalPass *= availableForms(*password);

		password++;
	}

	return 0;
}

void Transform::printTotalGentPasswordsInConsole()
{
	cout << totalPass;
}


int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;


	while (counter <= testCase)
	{
		Transform password;

		password.scanTextFromConsole();

		password.calcTotalGenerateAblePasswords();

		password.printTotalGentPasswordsInConsole();

		counter++;
	}

	return 0;
}