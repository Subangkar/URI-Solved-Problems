//https://www.urionlinejudge.com.br/judge/en/problems/view/1181

#include <iostream>
#include <iomanip>

using namespace std;

class BiDimentionalArray
{
public:
	BiDimentionalArray();
	~BiDimentionalArray();

private:
	char operationType = 'X';
	int operationRow = 0;
	double array2D[12][12];
	int row = 0, colm = 0;
	int totalNum = 12; // in a row or colm

	double sum = 0;
	double result = 0;

	void sumOfNum();

};

BiDimentionalArray::BiDimentionalArray()
{
	cin >> operationRow;
	cin >> operationType;

	for (row = 0; row <= 11; row++)
	{
		for (colm = 0; colm <= 11; colm++)
		{
			cin >> array2D[row][colm];
		}
	}
}

BiDimentionalArray::~BiDimentionalArray()
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

	cout << fixed << setprecision(1) << result << endl;
}

void BiDimentionalArray::sumOfNum()
{
	for (colm = 0; colm <= 11; colm++)
	{
		sum += array2D[operationRow][colm];
	}
}


int main()
{
	BiDimentionalArray number;

	return 0;
}
