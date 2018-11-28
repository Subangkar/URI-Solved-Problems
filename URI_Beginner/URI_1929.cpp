#include<stdio.h>

int * BubbleSort( int array[] , int indexLength ) // sorts an array min to max
{
	int max=-999999999;

	int minIndex=0 ;
	int maxIndex=indexLength ;
	int maxIndexPos=0 ;

	for(maxIndex=indexLength ; maxIndex>=0 ; maxIndex--)
	{
		for(minIndex=0 ; minIndex<=maxIndex ; minIndex++) // find out the max each time
		{
			if(max<array[minIndex]) { max=array[minIndex] ;
									  maxIndexPos=minIndex ; }	
		}
		array[maxIndexPos] = array[maxIndex] ;
		array[maxIndex] = max ;
		max=-999999999 ; // reset the max each time
	}

	return array ;
}

void main()
{
	char reply='N' ;
	int side[4] ;
	int index=0;
	while( scanf("%d",&side[index++]) && index<=3 ) ;

	int *sortedSide = BubbleSort(side,3) ;

	if( sortedSide[0]+sortedSide[1]>sortedSide[2] || sortedSide[1]+sortedSide[2]>sortedSide[3]) { reply='S' ; }

	printf("%c\n",reply) ;
}