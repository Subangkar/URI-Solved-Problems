//https://www.urionlinejudge.com.br/judge/en/problems/view/1042
#include<stdio.h>


int soringIn2Arrays()
{
	int givenArray[3] ;
	int sortedArray[3] ;
	int max=-99999999999999999 ;
	int maxIndex=0 ;

	int forwardindexCounter=0 ;
	int backwardindexCounter=2 ;
	int indexCounter=0 ;
	int minToMaxIndexCounter=0 ; 

	for(indexCounter=0 ; indexCounter<=2 ; indexCounter++)
	{
		scanf("%d",&givenArray[indexCounter]) ;
	}

	for(indexCounter=0 ; indexCounter<=2 ; indexCounter++) // given 2 sorted copy
	{
		sortedArray[indexCounter] = givenArray[indexCounter] ;
	}

	for( backwardindexCounter=2 ; backwardindexCounter>=0 ; backwardindexCounter--)
	{

		for( forwardindexCounter=0 ; forwardindexCounter<=backwardindexCounter ; forwardindexCounter++)
		{
			if(max<givenArray[forwardindexCounter]) // gives max value each time
			{
				max = sortedArray[forwardindexCounter] ;
				maxIndex = forwardindexCounter ;
			}
		}

		sortedArray[maxIndex] = sortedArray[backwardindexCounter];
		sortedArray[backwardindexCounter] = max ;
		max = -99999999999999999 ;
	}

	for( minToMaxIndexCounter=0 ; minToMaxIndexCounter<=2 ; minToMaxIndexCounter++)
	{
		printf("%d\n",sortedArray[minToMaxIndexCounter]) ;
	}
	printf("\n") ;
	for( indexCounter=0 ; indexCounter<=2 ; indexCounter++)
	{
		printf("%d\n",givenArray[indexCounter]) ;
	}
	return 0 ;
}

int main()
{

	soringIn2Arrays() ;

	//printf("\n") ;
	return 0 ;
}