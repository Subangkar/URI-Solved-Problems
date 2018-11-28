//https://www.urionlinejudge.com.br/judge/en/problems/view/1175
#include <stdio.h>
 
int main() 
{
	int N[20] ;
	int counter=0 ;
	int minCounter=0 ;
	int maxCounter=19 ;

	for(counter=0 ; counter<=19 ; counter++)
	{
		scanf("%d",&N[counter]) ;
	}

	for(minCounter=0 , maxCounter=19 ; minCounter<maxCounter ; minCounter++ , maxCounter--)
	{
		int temp = N[minCounter] ;
		N[minCounter] = N[maxCounter] ;
		N[maxCounter] = temp ;
	}

	for(counter=0 ; counter<=19 ; counter++)
	{
		printf("N[%d] = %d\n",counter,N[counter]) ;
	}

    return 0 ;
}