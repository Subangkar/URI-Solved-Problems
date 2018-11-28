#include <stdio.h>

int numsCounterToExceedZ(int startNum , int endNum)
{
	int sum=0 ;
	int num=startNum ;
	int counter=0 ;

	for(num=startNum ; ; num++ )
	{
		sum = num + sum ;
		counter++ ;
		if( sum>endNum ) { break ; }
	}
	return counter ;
}


int main() 
{
	int X,Z ;

	scanf("%d",&X) ;
	while( scanf("%d",&Z) && Z<=X ) ;

	int totalNumsToExceed = numsCounterToExceedZ(X , Z ) ;

	printf("%d\n",totalNumsToExceed) ;

	return 0 ;
}