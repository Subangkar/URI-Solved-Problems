#include <iostream>

using namespace std;

class ages
{
	private:

		int age[12];

		int testCase;

	public:

		void scan()
		{
			cin >> testCase;

			int index = 1;

			while (cin >> age[index] && ++index <= testCase);
		}

		int print()
		{
			int avgTestCase = testCase / 2 + 1;
			
			return age[avgTestCase];
		}
};

int main()
{
	int testCase = 0;
	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		ages line;
		line.scan();

		cout << "Case " << counter << ": " << line.print() << endl;

		counter++;
	}

	return 0;
}