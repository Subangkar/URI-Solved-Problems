//https://www.urionlinejudge.com.br/judge/en/problems/view/1165
#include <stdio.h>

int isPrimeChecker(int number) //
{
	if(number!=2 && number%2==0) { return 0 ; } 

	else if(number<=7) { return 1 ; } 

	else
	{
		int divisor=0 ;
		for(divisor = 3 ; divisor*divisor<=number ; divisor=divisor+2 )
		{
			if( number%divisor==0 ) 
			{
				return 0 ;
			}
		}
	}
	return 1 ;
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

		numRepresenter[numCount] = isPrimeChecker(num[numCount]) ;
	}

	for( numCount = 0 ; numCount<=testCase-1 ; numCount++ )
	{
		if(numRepresenter[numCount]==1)
		{ 
			printf("%d eh primo\n",num[numCount]) ; 
		}
		else 
		{
			printf("%d nao eh primo\n",num[numCount]) ;
		}
	}

	return 0 ;
}