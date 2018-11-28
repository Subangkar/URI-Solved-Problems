//https://www.urionlinejudge.com.br/judge/en/problems/view/1516

/* DONE */

#include <iostream>
#include <limits>

using namespace std;

class Chars
{
public:
	Chars(int row,int colm);
	~Chars();
	
	void scanCharsFromConsole();

	void scanOutputRowAndColm();

	void printOutputImage();

private:
	int inputRow = 0;
	int inputColm = 0;

	int outputRow = 0;
	int outputColm = 0;

	int rowMultiples = 0;
	int colmMultiples = 0;

	char symbols[51][51];
};

Chars::Chars(int row, int colm)
{
	inputRow = row;
	inputColm = colm;
}

Chars::~Chars()
{
	cout << endl;
}

void Chars::scanCharsFromConsole()
{
	for (register int row = 0; row < inputRow; row++)
	{
		for (register int colm = 0; colm < inputColm; colm++)
		{
			cin >> symbols[row][colm];
		}
	}
}

void Chars::scanOutputRowAndColm()
{
	cin >> outputRow >> outputColm;

	rowMultiples = outputRow / inputRow;
	colmMultiples = outputColm / inputColm;
}

void Chars::printOutputImage()
{
	for (register int row = 0; row < inputRow; row++)
	{
		for (register int rowPrintCount = 1; rowPrintCount <= rowMultiples; rowPrintCount++)
		{
			for (register int colm = 0; colm < inputColm; colm++)
			{
				for (register int colmPrintCount = 1; colmPrintCount <= colmMultiples; colmPrintCount++)
				{
					cout << symbols[row][colm];
				}
			}
			cout << endl; // printing enter after each row
		}
	}
}


int main()
{
	register int row = 0, colm = 0;

	while (cin >> row >> colm && row != 0 && colm != 0)
	{

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // coz extra cin untill enter that is not stored

		Chars Image(row, colm);
		
		Image.scanCharsFromConsole();

		Image.scanOutputRowAndColm();

		Image.printOutputImage();

	}

	return 0;
}