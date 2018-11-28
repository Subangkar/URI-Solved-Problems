//https://www.urionlinejudge.com.br/judge/en/problems/view/1156
#include <stdio.h>
 
int main()
{
	double numerator = 1 ;
	double denominator = 1 ;

	double sum=0 ;

	for( numerator=1,denominator=1 ; numerator<=39 ; numerator=numerator+2,denominator=2*denominator )
	{
		sum = sum + (numerator/denominator) ;
	}

	printf("%.2f\n",sum) ;

	return 0 ;
}