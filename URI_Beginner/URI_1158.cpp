//https://www.urionlinejudge.com.br/judge/en/problems/view/1158
#include <stdio.h>
 
int main() 
{
	int num[1000][2] ; // num[row][1] = totalOddNumCounter

	int totalCase=0;

	scanf("%d",&totalCase) ;

	int row = 0 ;
	int colm = 0 ;
	for(row = 0 ; row<=totalCase-1 ; row++) // scan values to array
	{
		for(colm = 0 ; colm<=1 ; colm++)
		{
			scanf("%d",&num[row][colm]) ;
		}
	}

	int startOddNum=1 ;
	int sum=0 ;
	int oddNum=1 ;

	int StartColm = 0 ;
	int endColm = 0 ;

	for(row = 0 ; row<=totalCase-1 ; row++) // pass to next row for sum
	{
		if(num[row][0]%2==0) // find out the starting odd num
		{
			startOddNum = num[row][0] + 1 ;
		}
		else
		{
			startOddNum = num[row][0] ;
		}

		int count=1 ;
		for( count=1,oddNum = startOddNum ; count<=num[row][1] ; count++ , oddNum=oddNum+2 ) // do sum in a Row
		{
			sum = sum + oddNum ;
		}

		printf("%d\n",sum) ; // print sum in each row
		sum = 0 ; // reset sum to 0 each time
	}

	/*
	while( scanf("%d",&totalNumCounter) && totalNumCounter==0 ) ; // continue if totalNumCounter=0 is given

	int count=1 ;
	while( count++<=totalNumCounter ) // && sum=sum+num++ ) ;  //
	{
		sum=sum+num++ ;
	}
	printf("%d\n",sum) ;
	*/
	return 0 ;
}