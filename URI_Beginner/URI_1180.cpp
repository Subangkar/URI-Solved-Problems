//https://www.urionlinejudge.com.br/judge/en/problems/view/1180
#include <stdio.h>
 
int main() 
{
	int testCase=0 ;
	int N[1000] ;
	int count=0 ;

	int min = +99999999999999 ;
	int minPos = 0 ;

	scanf("%d",&testCase) ;

	for( count = 0 ; count<=testCase-1 ; count++)
	{
		scanf("%d",&N[count]) ;
	}

	for( count = 0 ; count<=testCase-1 ; count++)
	{
		if(N[count]<min)
		{
			min = 	N[count] ;
			minPos = count ;
		}
	}

	printf("Menor valor: %d\n",min) ;
	printf("Posicao: %d\n",minPos) ;

    return 0 ;
}