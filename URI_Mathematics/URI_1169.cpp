#include <iostream>

using namespace std;

class food
{
	private:

		unsigned long long power(unsigned long long  num, int pow)
		{
			if (pow == 1) { return num; }
			else if (pow == 0) { return 1; }

			unsigned long long powerResult = num * power(num, pow - 1);

			return powerResult;
		}

		void summession()
		{
			int pow = 0;
			sum = 0;
			while (pow < square)
			{
				sum += power(2, pow++);
			}
		}

		int square;

		unsigned long long sum;

	public:

		void scan()
		{
			cin >> square;
		}

		unsigned long long InKg() 
		{
			summession();
			return sum / 12000;
		}
};

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		food cereal;
		cereal.scan();

		cout << cereal.InKg() << " kg" << endl;

		counter++;
	}
}
