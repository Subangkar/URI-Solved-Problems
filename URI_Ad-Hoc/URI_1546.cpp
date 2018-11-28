//https://www.urionlinejudge.com.br/judge/en/problems/view/1546

#include <iostream>

using namespace std;

void PrintR() { cout << "Rolien" << endl; }
void PrintN() { cout << "Naej" << endl; }
void PrintE() { cout << "Elehcim" << endl; }
void PrintO() { cout << "Odranoel" << endl; }


class Print
{
public:
	Print(int cases) { testCase = cases;}

	void scanOptionAndPrint(); 

private:
	int testCase = 0;
	int optionValue = 0;

	void(*method[5])() = { NULL,PrintR ,PrintN,PrintE,PrintO };
};

void Print::scanOptionAndPrint()
{
	for (size_t i = 0; i < testCase; i++)
	{
		cin >> optionValue;
		(*method[optionValue])();
	}
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	int totalCom = 0;

	while (counter <= testCase)
	{
		cin >> totalCom;

		Print Compliments(totalCom);

		Compliments.scanOptionAndPrint();

		counter++;
	}

	return 0;
}