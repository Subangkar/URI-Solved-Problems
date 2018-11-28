#include<stdio.h>

int factorial(int number)
{
	int mult=1 ;
	int multiplier = 1 ;

	for( multiplier = 1 ; multiplier<=number ; multiplier++ )
	{
		mult = mult * multiplier ;
	}

	return mult ;
}

int main()
{
	int givennum;

	
	scanf("%d",&givennum);


	int factorialValue = factorial(givennum) ;

	printf("%d",factorialValue);

	printf("\n");
	return 0 ;
}
