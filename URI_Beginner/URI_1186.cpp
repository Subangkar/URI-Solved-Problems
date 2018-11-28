//https://www.urionlinejudge.com.br/judge/en/problems/view/1186

#include <iostream>
#include <iomanip>

using namespace std;

class BiDimentionalArray
{
public:
	BiDimentionalArray() {

	}
	~BiDimentionalArray();

	void takeArraysContents();

	void operationResults();

private:
	char operationType = 'X';
	double array2D[12][12];
	int row = 0, colm = 0;
	int totalNum = 66;

	double sum = 0;
	double result = 0;

	void sumOfNum();

};

BiDimentionalArray::~BiDimentionalArray()
{
	cout << endl;
}

void BiDimentionalArray::takeArraysContents()
{
	cin >> operationType;

	for (row = 0; row <= 11; row++)
	{
		for (colm = 0; colm <= 11; colm++)
		{
			cin >> array2D[row][colm];
		}
	}
}

void BiDimentionalArray::sumOfNum()
{
	int startColm = 1; // for row=11;
	for (row = 11; row >= 0; row--, startColm++)
	{
		for (colm = startColm; colm <= 11; colm++)
		{
			sum += array2D[row][colm];
		}
	}
}

void BiDimentionalArray::operationResults()
{
	sumOfNum();

	switch (operationType)
	{
	case 'S':
		result = sum;
		break;
	case 'M':
		result = sum / totalNum;
		break;
	}
	cout << fixed << setprecision(1) << result;
}



int main()
{
	BiDimentionalArray number;
	number.takeArraysContents();
	number.operationResults();

	return 0;
}
