//https://www.urionlinejudge.com.br/judge/en/problems/view/1164
#include <stdio.h>

 /*A perfect number is an integer for which the sum of all its own positive divisors (excluding itself) is equal to the number itself.
 For example the number 6 & 28 is perfect
 */
int isPerfectChecker(int number) //
{
	int sumOfAllDivisors=0 ;

	int divisor=0 ;
	for(divisor = 1 ; divisor<number ; divisor++ ) // '<' cos divisors are excluding the number itself
	{
		if( number%divisor==0 ) 
		{
			sumOfAllDivisors = sumOfAllDivisors + divisor ;
		}
	}

	if( sumOfAllDivisors==number )  { return 1 ; }
	else							{ return 0 ; }
}

int main() 
{
	int testCase=0 ;
	scanf("%d",&testCase) ;

	int num[100] ;
	int numRepresenter[100] ;

	int numCount = 0 ;
	for( numCount = 0 ; numCount<=testCase-1 ; numCount++ )
	{
		scanf("%d",&num[numCount]) ;

		numRepresenter[numCount] = isPerfectChecker(num[numCount]) ;
	}

	for( numCount = 0 ; numCount<=testCase-1 ; numCount++ )
	{
		if(numRepresenter[numCount]==1)
		{ 
			printf("%d eh perfeito\n",num[numCount]) ; 
		}
		else 
		{
			printf("%d nao eh perfeito\n",num[numCount]) ;
		}
	}

	return 0 ;
}