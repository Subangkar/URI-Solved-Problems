//https://www.urionlinejudge.com.br/judge/en/problems/view/1259
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

int main()
{
	int testCase=0 ;

	int oddNum[100000] ;
	int evenNum[100000] ;

//	int *sortedOddNum ;
//	int *sortedEvenNum ;

	scanf("%d",&testCase) ;

//	oddNum = &testCase ;
//	evenNum = &testCase ;

	int inputNum=0 ;

	int oddIndex=0 ;
	int evenIndex=0 ;
	int inputNumCounter = 0 ;
	for(inputNumCounter=1 ; inputNumCounter<=testCase ; inputNumCounter++ )
	{
		scanf("%d",&inputNum) ;

		if( inputNum%2==0 ) { evenNum[evenIndex++] = inputNum ; }
		else				{ oddNum[oddIndex++] = inputNum ; }
	
	}

	int oddIndexLength=oddIndex-1 ; // cos last index is +1 for loop
	int evenIndexLength=evenIndex-1 ;

	int *sortedOddNum = BubbleSort(oddNum,oddIndexLength) ; // gets the odd nums array in sorted form
	int *sortedEvenNum = BubbleSort(evenNum,evenIndexLength) ; // gets the even nums array in sorted form


	for(evenIndex=0 ; evenIndex<=evenIndexLength ; evenIndex++)
	{
		printf("%d\n",sortedEvenNum[evenIndex]) ;
	}
	for(oddIndex=oddIndexLength ; oddIndex>=0 ; oddIndex--)
	{
		printf("%d\n",sortedOddNum[oddIndex]) ;
	}

	return 0 ;
}