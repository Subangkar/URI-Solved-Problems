//https://www.urionlinejudge.com.br/judge/en/problems/view/1467


#include <iostream>

using namespace std;

int main()
{
	int counter = 1;

	char winnerMan = 'X';

	int A, B, C = 0;

	while ( cin>>A>>B>>C )
	{
		if (A != B && A != C)
		{
			winnerMan = 'A';
		}
		else if (B != A && B != C)
		{
			winnerMan = 'B';
		}
		else if (C != A && C != B)
		{
			winnerMan = 'C';
		}
		else
		{
			winnerMan = '*';
		}

		cout << winnerMan << endl;
	}

	return 0;
}