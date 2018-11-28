//https://www.urionlinejudge.com.br/judge/en/problems/view/1189

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
	double array2D[12][12];
	int row = 0, colm = 0;
	int totalNum = 30;

	double sum = 0;
	double result = 0;

	void sumOfNum();

};

BiDimentionalArray::BiDimentionalArray()
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
	//	cout << setprecision(1) << fixed << result << endl;
}

void BiDimentionalArray::sumOfNum()
{
	int startRow = 1, endRow = 10; // for colm=0
	for (colm = 0; colm <= 4; colm++, startRow++, endRow--)
	{
		for (row = startRow; row <= endRow; row++)
		{
			sum += array2D[row][colm];
		}
	}
}


int main()
{
	BiDimentionalArray number;

	return 0;
}
