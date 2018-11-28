//https://www.urionlinejudge.com.br/judge/en/problems/view/1160

#include <iostream>

using namespace std;

struct Population
{
	int value;
	double rate;
};

class PopIncrease
{
public:
	PopIncrease();
	~PopIncrease();

private:
	int passedYears = 0;
	Population city1, city2;

	void neededYearsToCrossCity2();
};

PopIncrease::PopIncrease()
{
	cin >> city1.value >> city2.value >> city1.rate >> city2.rate;
	
	city1.rate /= 100;
	city2.rate /= 100;
}

void PopIncrease::neededYearsToCrossCity2()
{
	for (passedYears = 0; city1.value <= city2.value && passedYears<=100; passedYears++) // start from 0 otherwise an extra 1 will be added at last
	{
		city1.value += city1.rate*city1.value;
		city2.value += city2.rate*city2.value;
	}
}

PopIncrease::~PopIncrease()
{
	neededYearsToCrossCity2();

	if (passedYears > 100)
	{
		cout << "Mais de 1 seculo." << endl;
		return;
	}
	cout << passedYears << " anos." << endl;
}

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		PopIncrease populate;
		counter++;
	}

	return 0;
}