#include <stdio.h>

int factorial(int num)
{
	if(num==0) { return 1 ; }

	int factResult = num * factorial(num-1) ;

	return factResult ;
}


int digitFactSum(int num)
{
	int sum  = 0 ;
	int digtPos=1 ;
	
	while ( num<=-1 || num>=1 )
	{
		int digit = num%10 ;

		sum = sum + digit * factorial(digtPos) ;

		digtPos++ ;
		num = num / 10 ;
	}

	return sum ;
}


void main()
{
	int givenNum=1 ;

	while( scanf("%d",&givenNum) && givenNum!=0 )
	{
	
		int sumOfDigitsFact = digitFactSum(givenNum) ;
	
		printf("%d\n",sumOfDigitsFact) ;
	}

}