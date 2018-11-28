//https://www.urionlinejudge.com.br/judge/en/problems/view/1221
#include <iostream>

using namespace std ;


int isPrimeChecker(long long number) //
{
	int divisor=0 ;

	if(number!=2 && number%2==0) { return 0 ; } 

	else if(number<=7) { return 1 ; } 

	else
	{
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
	cin>>testCase ;

	long long num[20001] ;

	int index = 0 ;

	for(index = 1 ; index<=testCase ; index++)
	{
		cin>>num[index] ;
		num[index] = isPrimeChecker(num[index]) ;
	}

	for(index = 1 ; index<=testCase ; index++)
	{
		if(num[index]==1) { cout<<"Prime\n" ; }
		else			  { cout<<"Not Prime\n" ; }
	}

	return 0 ;
}

/*
// In C - Runtime Error
//https://www.urionlinejudge.com.br/judge/en/problems/view/1221
#include <stdio.h>

int isPrimeChecker(long long number) //
{
	int divisor=0 ;

	if(number!=2 && number%2==0) { return 0 ; } 

	else if(number<=7) { return 1 ; } 

	else
	{
		
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

void main() 
{
	int testCase=0 ;
	scanf("%d",&testCase) ;

	long long num[400] ;

	int index = 0 ;

	for(index = 1 ; index<=testCase ; index++)
	{
		scanf("%lld",&num[index]) ;
		num[index] = isPrimeChecker(num[index]) ;
	}

	for(index = 1 ; index<=testCase ; index++)
	{
		if(num[index]==1) { printf("Prime\n") ; }
		else			  { printf("Not Prime\n") ; }
	}

}
*/