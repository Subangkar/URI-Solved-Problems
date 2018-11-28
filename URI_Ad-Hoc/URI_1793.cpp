//https://www.urionlinejudge.com.br/judge/en/problems/view/1793

#include <iostream>

using namespace std;

int main()
{
	int totalPeople = 0;

	while (cin>>totalPeople && totalPeople!=0)
	{
		int *times = new int[totalPeople];

		for (size_t i = 0; i < totalPeople; i++) cin >> *(times + i); // scan done

		int lastIndex = totalPeople - 1;

		int sum = 10; // coz at least 1-time lift will be used that ignores index=0 to be calculated

		while (lastIndex) // calc for all others execpt index=0
		{
			int timeDiff = times[lastIndex] - times[lastIndex - 1];

			sum += (timeDiff < 10 ? timeDiff : 10);

			lastIndex--;
		}

		cout << sum << endl;
	}

	return 0;
}