//https://www.urionlinejudge.com.br/judge/en/problems/view/1079
#include <stdio.h>
 
int main() 
{
	
	float num[1000][3] ;
	float avg=0 ;

	int testCase=0 ;
	int row=0 ;
	int colm=0 ;
    
	scanf("%d",&testCase) ;
	
	for(row=0 ; row<=testCase-1 ; row++) // scan data to array
	{
		for( colm=0 ; colm<=2 ; colm++ ) 
		{
			scanf("%f",&num[row][colm]) ;
		}
	}

	for(row=0 ; row<=testCase-1 ; row++) // scan data to array
	{
		avg = (num[row][0]*2 + num[row][1]*3 + num[row][2]*5) / (2+3+5) ;
		printf("%.1f\n",avg) ;
	}
	
	
    return 0 ;
}
