#include <iostream>

using namespace std;

int pow(int num,int pw)
{
	if (pw == 0) { return 1; }
	int powValue = num * pow(num, pw - 1);
	return powValue;
}

class Point
{
	public:

		int x;
		int y;

		char max()
		{
			if (Rafael() > Beto())
			{
				if (Rafael() > Carlos())
				{
					return 'R';
				}
				else
				{
					return 'C';
				}
			}

			else
			{
				if (Beto() > Carlos())
				{
					return 'B';
				}
				else
				{
					return 'C';
				}
			}
		}

	private:

		int Rafael() // (3x)² + y²
		{
			int f = 9 * pow(x, 2) + pow(y, 2);
			return f;
		}

		int Beto() //  2(x²) + (5y)²
		{
			int f = 2 * pow(x, 2) + 25 * pow(y, 2);
			return f;
		}

		int Carlos() //  -100x + y³
		{
			int f = -100 * x + pow(y, 3);
			return f;
		}

};


int main()
{
	int testCase = 0;

	scanf("%d", &testCase);
	int counter = 1;

	while (counter <= testCase)
	{
		Point input;

		cin >> input.x >> input.y;

		if (input.max() == 'B')
		{
			printf("Beto ganhou\n");
		}
		
		else if (input.max() == 'C')
		{
			printf("Carlos ganhou\n");
		}

		else if (input.max() == 'R')
		{
			printf("Rafael ganhou\n");
		}

		counter++;
	}

	return 0;
}