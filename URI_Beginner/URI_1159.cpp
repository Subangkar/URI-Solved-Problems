#include <stdio.h>

int SumOfFiveConsecutiveEvenNumbers( int startNum )
{
	int minEvenNum=0 ;
	int evenNum=0 ;
	int count=1 ;

	if(startNum%2==0) { minEvenNum=startNum ; }
	else			  { minEvenNum=startNum+1 ; }

	int sum=0 ;

	for(evenNum=minEvenNum,count=1 ; count<=5 ; evenNum=evenNum+2,count++ )
	{
		sum = sum + evenNum ;
	}

	return sum ;
}

int main() 
{
	int sumOfNums[1000] ;
	int givenNum=0 ;

	int index = 0 ;
	while( scanf("%d",&givenNum) && givenNum!=0 )
	{
		sumOfNums[index++] = SumOfFiveConsecutiveEvenNumbers(givenNum) ;
	}
	int lastIndex=index-1 ;

	index=0 ;
	while( index<=lastIndex && printf("%d\n",sumOfNums[index++]) ) ;

	return 0 ;
}