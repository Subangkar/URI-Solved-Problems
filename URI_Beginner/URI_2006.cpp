
/* DONE IN C++ & JAVA */

#include <iostream>

using namespace std;


int main()
{
	int correctAns = 0;
	cin >> correctAns;

	int correctAnsCounter = 0;

	int answer = 0;
	int index = 0;

	while (index < 5)
	{
		cin >> answer;

		if (answer == correctAns)
			correctAnsCounter++;

		index++;
	}

	cout << correctAnsCounter << endl;

	return 0;

}
