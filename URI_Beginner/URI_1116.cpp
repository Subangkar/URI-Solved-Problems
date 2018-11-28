//https://www.urionlinejudge.com.br/judge/en/problems/view/1116
#include <stdio.h>
 
int main() 
{
	float num[10000][2] ;

	int row=0 ;
	int colm=0;
	int testCase=0 ;

	float quotient = 0;

	scanf("%d",&testCase) ;

	for(row=0 ; row<=testCase-1 ; row++ ) // scan values to array
	{
		for( colm=0 ; colm<=1 ; colm++)
		{
			scanf("%f",&num[row][colm]) ;
		}
	}

	for(row=0 ; row<=testCase-1  ; row++ ) // scan values to array
	{
		if(num[row][1]==0) // X / 0
		{ 
			printf("divisao impossivel\n") ;
			continue ;
		}

		quotient = num[row][0] / num[row][1] ; // =X/Y
		printf("%.1f\n",quotient) ;
	}

    return 0 ;
}
