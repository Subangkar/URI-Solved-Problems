//https://www.urionlinejudge.com.br/judge/en/problems/view/1101
#include <stdio.h>
 
int main() 
{
	int num[1000][2] ;
    int sum=0 ;

	int number=0 ;

	int row=0  ;
	int colm=0 ;
	int lastSumRow=0 ;

	int startColm=0 ;
	int endColm=1 ;

	for(row=0 ; ; row++) // scan data to array
	{
		for( colm=0 ; colm<=1 ; colm ++) 
		{
			scanf("%d",&num[row][colm]) ;
		}
		if(num[row][1]==0) // stops when 5 (0)
		{ 
			lastSumRow = row - 1 ;
			break ;
		} 
	}
	
	for(row=0 ; row<=lastSumRow ; row++) // switch print to next line
	{
		if(num[row][0]<num[row][1])
		{ 
			startColm=0 ;
			endColm=1 ;		
		}
		else
		{ 
			startColm=1 ;
			endColm=0 ;		
		}

		for( number=num[row][startColm] ; number<=num[row][endColm] ; number++) // print mid Numbers in a Row & do Sum
		{
			printf("%d ",number) ;
			sum = sum + number ;
		}
		printf("Sum=%d\n",sum) ;
		sum = 0 ;
	}

    return 0 ;
}
