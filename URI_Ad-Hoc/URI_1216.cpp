//https://www.urionlinejudge.com.br/judge/en/problems/view/1216

/* DONE */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int num;
	double sum = 0;
	double avg = 0;

	char *name = new char[40];

	int counter = 0;
	while (scanf("%[A-Za-z \n] %d" ,name ,&num)==2 )
	{
		sum += num;
		counter++;

		fflush(stdin);
	}

	avg = sum / counter;

	printf("%.1f", avg);

	cout << endl;

	return 0;
}