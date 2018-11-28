//https://www.urionlinejudge.com.br/judge/en/problems/view/1155
#include <stdio.h>
 
int main()
{
	double denominator = 1 ;

	double sum=0 ;

	for( denominator=1 ; denominator<=100 ; denominator++ )
	{
		sum = sum + (1/denominator) ;
	}

	printf("%.2f\n",sum) ;

	return 0 ;
}